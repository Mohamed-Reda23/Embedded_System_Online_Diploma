#include <stdio.h>
#include"STD_TYPES.h"
#include "driver.h"
#include"PressureSensor.h"
#include"PressureDetection.h"
#include"AlarmActuator.h"

int main()
{
	GPIO_INITIALIZATION();
	while (1)
	{
	    Pressure_Detection();
	}

}
