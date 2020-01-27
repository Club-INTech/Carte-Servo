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
    }
    return nullptr;
}


BufferedData* Suck(BufferedData& args) {
    uint8_t idValve;
    getData<uint8_t>(idValve, &args);
    bool state;
    getData<bool>(state, &args);

    switch(idValve){
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
    }
    return nullptr;
}


#if defined(main)

BufferedData* Gate(BufferedData& args) {
    uint8_t angle;
    getData<uint8_t>(angle, &args);
    servo_gate_droite->write(angle);
    servo_gate_gauche->write(angle);

    return nullptr;
}

#endif




