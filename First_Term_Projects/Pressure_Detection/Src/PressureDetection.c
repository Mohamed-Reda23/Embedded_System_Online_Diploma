#include"STD_TYPES.h"
#include"driver.h"
#include"PressureSensor.h"
#include"PressureDetection.h"
#include"AlarmActuator.h"


uint32_T pressure = 0;
uint32_T thershold = 20;

void (*state)();

Pressure_Status_t Pressure_Check()
{
    if(pressure >= thershold)
        return NOT_SAFE;
    else
        return SAFE;
}
void Pressure_Detection()
{
    GetPressureValue(&pressure);
    if(!Pressure_Check())
    {
        state = Set_Alarm_On;
        Set_Alarm_State();
        state = Set_Alarm_Off;
        Set_Alarm_State();
        Delay(10000000);
    }
    else
    {
        state = Set_Alarm_Off;
        Set_Alarm_State();

    }
}
