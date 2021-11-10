#include "mcc_generated_files/system.h"
#include "mcc_generated_files/mcc.h"

//Declare the veriable
uint16_t convertedValue = 0;
float voltage = 0;

//For any output control (Not Compulsory)
void My_ISR(void) //declare a function for output control
{
    {
        if (voltage == 0)
            LEDG_SetHigh();     //This is LED Green
        else
            LEDG_SetLow();
    }
    {
        if (voltage <=3 && voltage != 0)
            LEDB_SetHigh();     //This is LED Blue
        else
            LEDB_SetLow();
    }
    {
        if (voltage >3)
            LEDR_SetHigh();     //This is LED Red
        else
            LEDR_SetLow();
    }
    ADC1_SoftwareTriggerDisable(); // trigger next conversion
}

//Main body
int main(void) 
{
    SYSTEM_Initialize();

    ADC1_ChannelSelect(channel_AN5);
    ADC1_SoftwareTriggerDisable(); // begin first conversion
    TMR1_SetInterruptHandler(My_ISR);
    
    TMR1_Start();
    
    while (1) 
    {
        if (ADC1_IsConversionComplete(channel_AN5)) 
        {
            convertedValue = ADC1_ConversionResultGet(channel_AN5);
        }
        else 
        {
            convertedValue = convertedValue;
        }
        voltage = (convertedValue * 5.0) / 1023; // convert ADC count into voltage
    }
    return 1;
}
