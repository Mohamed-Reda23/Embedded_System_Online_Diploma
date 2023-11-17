#include"driver.h"
#include"AlarmActuator.h"

extern void (*state)();

void Set_Alarm_State()
{
    state();
}
void Set_Alarm_On()
{
    Set_Alarm_actuator(Reset);
    Delay(25000000);
}
void Set_Alarm_Off()
{
    Set_Alarm_actuator(Set);
}
