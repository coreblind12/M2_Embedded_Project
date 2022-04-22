#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>

//Macro definition

#define F_CPU 16000000UL 	/** Clock Frequency of MCU is 16 MHz */
#define SENSOR_ON (!(PIND&(1<<PD2)))  /// Sensor Switch ON
#define HEAT_ON (!(PIND&(1<<PD3)))  /// Heater Switch ON


// Activity 1
void InitLED(void);

// Activity 2
uint16_t ReadADC(uint8_t ch);
void InitADC();

// Activity 3
char outPWM(uint16_t temp_value);
void InitPWM(void);

// Activity 4
void InitUART(uint16_t ubrr);
char UARTread();
void UARTwrite(char data);

#endif // ACTIVITY1_H_INCLUDED
