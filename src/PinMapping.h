//
// Created by jasmin on 27/01/2020.
//

#ifndef CARTE_SERVO_PINMAPPING_H
#define CARTE_SERVO_PINMAPPING_H

#include "Arduino.h"

#if defined(main)

const unit8_t PIN_0 = 0;
const unit8_t PIN_1 = 1;
const unit8_t PIN_2 = 2;
const unit8_t PIN_3 = 3;

const uint8_t SERVO_0 = 6;
const uint8_t SERVO_1 = 9;
const uint8_t SERVO_2 = 10;
const uint8_t SERVO_3 = 11;

const uint8_t VALVE_0 = PIN_0;
const uint8_t VALVE_1 = PIN_1;
const uint8_t PUMP_0 = PIN_2;
const uint8_t PUMP_1 = PIN_3;

const uint8_t PIN_SERVO_GATE_GAUCHE = SERVO_0;
const uint8_t PIN_SERVO_GATE_DROITE = SERVO_1;

#endif

const uint8_t VALVE_0 = 0;
const uint8_t VALVE_1 = 0;
const uint8_t VALVE_2 = 0;
const uint8_t VALVE_3 = 0;
const uint8_t VALVE_4 = 0;
const uint8_t VALVE_5 = 0;

const uint8_t PUMP_0 = 0;
const uint8_t PUMP_1 = 0;
const uint8_t PUMP_2 = 0;
const uint8_t PUMP_3 = 0;
const uint8_t PUMP_4 = 0;
const uint8_t PUMP_5 = 0;



#endif //CARTE_SERVO_PINMAPPING_H
