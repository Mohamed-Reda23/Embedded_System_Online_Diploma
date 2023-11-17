#include"STD_TYPES.h"
#include"PressureSensor.h"
#include"driver.h"

void GetPressureValue(uint32_T* pressure)
{
    *pressure = getPressureVal();

}
