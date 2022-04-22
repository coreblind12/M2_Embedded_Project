#include"Activity.h"

/**
 * @brief Initialize all the peripherals
 *
 */

void peripheral_init(void)
{
    InitLED();
    InitADC();
    InitPWM();
    InitUART(103);
}

uint16_t temp;
char temp_data;
int main(void)
{
    peripheral_init();

    while(1)
    {
        if(SENSOR_ON && HEAT_ON)   //If Button sensor switch is ON
        {
            PORTB |= (1<<PB0);   //Button sensor LED is ON
            temp=ReadADC(0);
            temp_data = outPWM(temp);
            UARTwrite(temp_data);
        }
        else
        {
            PORTB &= ~(1<<PB0);   //Button Sensor LED is OFF
            OCR1A=0;
        }
    }
    return 0;
}
