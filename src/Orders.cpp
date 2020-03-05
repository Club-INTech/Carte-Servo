//
// Created by jasmin on 26/01/2020.
//

#include "Orders.h"

BufferedData* Valve(BufferedData& args) {

    uint8_t idValve;
    getData<uint8_t>(idValve, &args);
    bool state;
    getData<bool>(state, &args);

    switch(idValve){
        case 0:
            digitalWrite(VALVE_0, state);
            break;
        case 1:
            digitalWrite(VALVE_1, state);
            break;
        case 2:
            digitalWrite(VALVE_2, state);
            break;
        case 3:
            digitalWrite(VALVE_3, state);
            break;
        case 4:
            digitalWrite(VALVE_4, state);
            break;
        case 5:
            digitalWrite(VALVE_5, state);
            break;
        case 6:
            digitalWrite(VALVE_6, state);
            break;
    }
    return nullptr;
}


BufferedData* Suck(BufferedData& args) {
    uint8_t idPump;
    getData<uint8_t>(idPump, &args);
    bool state;
    getData<bool>(state, &args);

    switch(idPump){
        case 0:
            digitalWrite(PUMP_0, state);
            break;
        case 1:
            digitalWrite(PUMP_1, state);
            break;
        case 2:
            digitalWrite(PUMP_2, state);
            break;
        case 3:
            digitalWrite(PUMP_3, state);
            break;
        case 4:
            digitalWrite(PUMP_4, state);
            break;
        case 5:
            digitalWrite(PUMP_5, state);
            break;
        case 6:
            digitalWrite(PUMP_6, state);
            break;
    }



    return nullptr;
}

BufferedData* DiodeOn(BufferedData& args) {
    pinMode(A0, OUTPUT);
    digitalWrite(A0, HIGH);
    return nullptr;
}
BufferedData* DiodeOff(BufferedData& args) {
    pinMode(A0, OUTPUT);
    digitalWrite(A0, LOW);
    return nullptr;
}

#if defined(MAIN)
Servo* servo_gate_droite;
Servo* servo_gate_gauche;

BufferedData* Gate(BufferedData& args) {
    uint8_t angle;
    getData<uint8_t>(angle, &args);
    servo_gate_droite->write(angle);
    servo_gate_gauche->write(angle);

    return nullptr;
}

void initServos(){
    servo_gate_gauche->attach(PIN_SERVO_GATE_GAUCHE);
    servo_gate_droite->attach(PIN_SERVO_GATE_DROITE);
}

#endif




