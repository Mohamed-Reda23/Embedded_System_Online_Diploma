#ifndef PRESSUREDETECTION_H_
#define PRESSUREDETECTION_H_



typedef enum
{
    NOT_SAFE,
    SAFE
}Pressure_Status_t;



Pressure_Status_t Pressure_Check();
void Pressure_Detection();





#endif // PRESSUREDETECTION_H_
