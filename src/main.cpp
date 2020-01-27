//
// Created by louis on 25/01/2020.
//
#include "Orders.h"
#include "Arduino.h"
#include "I2CC.h"
#include "Servo.h"

using namespace I2CC;

void setup() {
    pinMode(VALVE_0, OUTPUT);
    pinMode(VALVE_1, OUTPUT);
    pinMode(VALVE_2, OUTPUT);
    pinMode(VALVE_3, OUTPUT);
    pinMode(VALVE_4, OUTPUT);
    pinMode(VALVE_5, OUTPUT);

    pinMode(PUMP_0, OUTPUT);
    pinMode(PUMP_1, OUTPUT);
    pinMode(PUMP_2, OUTPUT);
    pinMode(PUMP_3, OUTPUT);
    pinMode(PUMP_4, OUTPUT);
    pinMode(PUMP_5, OUTPUT);

    registerRPC(Valve,1);
    registerRPC(Suck,2);

#if defined(main)
    registerRPC(Gate,3);
    Servo* servo_gate_gauche;
    servo_gate_gauche->attach(PIN_SERVO_GATE_GAUCHE);
    Servo* servo_gate_droite;
    servo_gate_droite->attach(PIN_SERVO_GATE_DROITE);
#endif
    Servo* servo_gate_gauche;
    startI2CC(1);

}

void loop(){}