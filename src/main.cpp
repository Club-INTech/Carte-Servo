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

#if defined(MAIN)
    registerRPC(Gate,3);
    initServos();

    startI2CC(1);
#endif
#if defined(slave_avant)
    startI2CC(2);
#endif
#if defined(slave_arriere)
    startI2CC(3);
#endif


}

void loop(){}