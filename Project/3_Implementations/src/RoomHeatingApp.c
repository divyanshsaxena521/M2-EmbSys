/**
 * @file SeatHeatingApp.c
 * @author Divyansh saxena(saxenadivyansh521@gmail.com)
 * @brief Heat Seating Application to set Temperature of seat
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
        if(activity1_LED()==1) //Check if both the switches are pressed
        {
           
            TurnLED_ON();//Turn LED ON
            temp=activity2_GetADC(); //Get the ADC value
            activity3_PWM(temp); //PWM output based on temperature
		    activity4_USARTWrite(temp); //To Serial monitor to print Temperature
            

        }
        else  
        {
            TurnLED_OFF();//Turn LED OFF
		    _delay_ms(200);
        }

    }
    return 0;
}
