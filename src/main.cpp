//
// Created by louis on 25/01/2020.
//
#include "Orders.h"
#include "Arduino.h"
#include "I2CC.h"
#include "Servo.h"

using namespace I2CC;

void setup() {
    pinMode(A1,OUTPUT);
    pinMode(A0,OUTPUT);
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

    digitalWrite(PUMP_0, LOW);
    digitalWrite(PUMP_1, LOW);
    digitalWrite(PUMP_2, LOW);
    digitalWrite(PUMP_3, LOW);
    digitalWrite(PUMP_4, LOW);
    digitalWrite(PUMP_5, LOW);
    digitalWrite(VALVE_0, LOW);
    digitalWrite(VALVE_1, LOW);
    digitalWrite(VALVE_2, LOW);
    digitalWrite(VALVE_3, LOW);
    digitalWrite(VALVE_4, LOW);
    digitalWrite(VALVE_5, LOW);
    digitalWrite(A1, HIGH);

#if defined(MAIN)
    pinMode(VALVE_6, OUTPUT);
    pinMode(PUMP_6,OUTPUT);
    pinMode(SERVO_1, OUTPUT);
    pinMode(SERVO_0, OUTPUT);
#endif


    registerRPC(Valve,1);
    registerRPC(Suck,2);
    registerRPC(DiodeOn,4);
    registerRPC(DiodeOff,5);

#if defined(MAIN)
    registerRPC(Gate,3);
    initServos();


    digitalWrite(A1,HIGH);
    startI2CC(4);
#endif
#if defined(slave_avant)
    startI2CC(2);
#endif
#if defined(slave_arriere)
    startI2CC(3);
#endif

}

void loop(){
    delay(1000);
    digitalWrite(A0, HIGH);
        delay(1000);
    digitalWrite(A0, LOW);

}