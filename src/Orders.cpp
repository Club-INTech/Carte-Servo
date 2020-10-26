//
// Created by jasmin on 26/01/2020.
//

#include "Orders.h"

BufferedData* Valve(BufferedData& args) {

    uint8_t idValve;
    getData<uint8_t>(idValve, &args);       //getData permet de récupèrer les données du BufferedData. idValve va prendre la valeur de ce qui a été envoyé
    bool state;
    getData<bool>(state, &args);            //state va prendre la valeur booléenne de la prochaine donnée émise (à supposer que l'id de la valve et son état ont été envoyé dans le bon ordre...)

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
#if defined(MAIN)
        case 6:
            digitalWrite(VALVE_6, state);
            break;
#endif
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
#if defined(MAIN)
        case 6:
            digitalWrite(PUMP_6, state);
            break;
#endif
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
Servo* servo_gate_droite = new Servo;
Servo* servo_gate_gauche = new Servo;
Servo* servo_flag = new Servo;


BufferedData* Gate(BufferedData& args) {
    uint8_t angle;
    getData<uint8_t>(angle, &args);
    servo_gate_droite->write(angle);
    float angleDroite;
    angleDroite = 180 - angle;
    servo_gate_gauche->write(angleDroite);
    digitalWrite(A1,LOW);

    return nullptr;
}

BufferedData* FlagDown(BufferedData& args) {
    digitalWrite(A0,HIGH);
    uint8_t angle;
    angle = 180;
    servo_flag->write(angle);
    return nullptr;
}

BufferedData* FlagUp(BufferedData& args) {
    digitalWrite(A0,HIGH);
    uint8_t angle;
    angle = 90;
    servo_flag->write(angle);
    return nullptr;
}


void initServos(){
    servo_gate_gauche->attach(PIN_SERVO_GATE_GAUCHE);
    servo_gate_droite->attach(PIN_SERVO_GATE_DROITE);
    servo_gate_gauche->write(15);
    servo_gate_droite->write(165);

    servo_flag->attach(PIN_SERVO_FLAG);

}

#endif




