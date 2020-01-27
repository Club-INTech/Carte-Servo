//
// Created by jasmin on 27/01/2020.
//

#ifndef CARTE_SERVO_PINMAPPING_H
#define CARTE_SERVO_PINMAPPING_H


const uint8_t PIN_SERVO_GATE_GAUCHE = 0;
const uint8_t PIN_SERVO_GATE_DROITE = 0;

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


Servo servo_gate_gauche;
servo_gate_gauche.attach(PIN_SERVO_GATE_GAUCHE);
Servo servo_gate_droite;
servo_gate_droite.attach(PIN_SERVO_GATE_DROITE);


#endif //CARTE_SERVO_PINMAPPING_H
