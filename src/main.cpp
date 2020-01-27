//
// Created by louis on 25/01/2020.
//
#include "Orders.cpp"
#include "Arduino.h"
#include "I2CC.h"

using namespace I2CC;

void setup( int main(){return 0;} ) {
    startI2CC(1);
    Servo* servo_gate_gauche;
    servo_gate_gauche->attach(PIN_SERVO_GATE_GAUCHE);
    Servo* servo_gate_droite;
    servo_gate_droite->attach(PIN_SERVO_GATE_DROITE);
}

void loop(){}