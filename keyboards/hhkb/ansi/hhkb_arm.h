#pragma once

#include <stdint.h>
#include <stdbool.h>
#include "gpio.h"
#include "wait.h"



/*
 * HHKB Matrix I/O
 *
 * row:     HC4051[A,B,C]  selects scan row0-7
 * row-ext: [En0,En1] row extention for JP
 * col:     LS145[A,B,C,D] selects scan col0-7 and enable(D)
 * key:     on: 0/off: 1
 * prev:    hysteresis control: assert(1) when previous key state is on
 */

/*
 * For TMK HHKB alt controller(ATMega32U4)
 *
 * row:         PB0-2
 * col:         PB3-5
 * col-enable:  PB6
 * key:         PD3(pull-uped)
 * prev:        PB7
 * power:       PD4(L:off/H:on)
 * row-ext:     PC6,7 for HHKB JP(active low)
 */

 #define ROW0 GP0
 #define ROW1 GP1
 #define ROW2 GP2
 #define COL0 GP3
 #define COL1 GP4
 #define COL2 GP5
 #define COL_ENABLE GP6
 #define PREV GP7
 #define POWER GP8
 #define KEY GP9
static inline void KEY_ENABLE(void) { writePinLow(COL_ENABLE); }
static inline void KEY_UNABLE(void) { writePinHigh(COL_ENABLE); }
static inline bool KEY_STATE(void) { return readPin(KEY); }
static inline void KEY_PREV_ON(void) { writePinHigh(PREV); }
static inline void KEY_PREV_OFF(void) { writePinLow(PREV); }
#ifdef HHKB_POWER_SAVING
static inline void KEY_POWER_ON(void) {
    setPinOutput(ROW0); writePinLow(ROW0);
    setPinOutput(ROW1); writePinLow(ROW1);
    setPinOutput(ROW2); writePinLow(ROW2);
    setPinOutput(COL0); writePinLow(COL0);
    setPinOutput(COL1); writePinLow(COL1);
    setPinOutput(COL2); writePinLow(COL2);
    setPinOutput(COL_ENABLE); writePinHigh(COL_ENABLE); // change pins output 0100 0000
    setPinOutput(PREV); writePinLow(PREV);
    setPinOutput(POWER); writePinHigh(POWER);    // MOS FET switch on
    /* Without this wait you will miss or get false key events. */
    wait_ms(5);                       // wait for powering up
}
static inline void KEY_POWER_OFF(void) {
    /* input with pull-up consumes less than without it when pin is open. */
    palSetGroupMode(IOPORT1, 0x00FFFF00, 0, PAL_MODE_INPUT_PULLUP);
    //DDRB = 0x00; PORTB = 0xFF;
    setPinOutput(POWER);
    writePinLow(POWER);      // change pins input with pull-up
    //DDRD |= (1<<4); PORTD &= ~(1<<4);   // MOS FET switch off
}
static inline bool KEY_POWER_STATE(void) { return palReadLine(POWER); }
#else
static inline void KEY_POWER_ON(void) {}
static inline void KEY_POWER_OFF(void) {}
static inline bool KEY_POWER_STATE(void) { return true; }
#endif
static inline void KEY_INIT(void)
{
    /* row,col,prev: output */
    setPinOutput(ROW0); writePinLow(ROW0);
    setPinOutput(ROW1); writePinLow(ROW1);
    setPinOutput(ROW2); writePinLow(ROW2);
    setPinOutput(COL0); writePinLow(COL0);
    setPinOutput(COL1); writePinLow(COL1);
    setPinOutput(COL2); writePinLow(COL2);
    setPinOutput(COL_ENABLE); writePinHigh(COL_ENABLE); // change pins output 0100 0000
    setPinOutput(PREV); writePinLow(PREV);

    // DDRB  = 0xFF;
    // PORTB = 0x40;   // unable
    /* key: input with pull-up */
    setPinInputHigh(KEY);
        // DDRD  &= ~0x80;
        // PORTD |=  0x80;

    KEY_UNABLE();
    KEY_PREV_OFF();

    KEY_POWER_OFF();
}
static inline void KEY_SELECT(uint8_t ROW, uint8_t COL)
{
    writePin(ROW0, ROW & 0x01);
    writePin(ROW1, ROW & 0x02);
    writePin(ROW2, ROW & 0x04);
    writePin(COL0, COL & 0x01);
    writePin(COL1, COL & 0x02);
    writePin(COL2, COL & 0x04);

    //PORTB = (PORTB & 0xC0) | (((COL) & 0x07)<<3) | ((ROW) & 0x07);

}
