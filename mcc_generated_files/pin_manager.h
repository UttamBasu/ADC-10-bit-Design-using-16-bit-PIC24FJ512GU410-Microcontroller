/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for PIN MANAGER.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.170.0
        Device            :  PIC24FJ512GU410
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.61
        MPLAB 	          :  MPLAB X v5.45
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RB5, high using LATB5.

  @Description
    Sets the GPIO pin, RB5, high using LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB5 high (1)
    channel_AN5_SetHigh();
    </code>

*/
#define channel_AN5_SetHigh()          (_LATB5 = 1)
/**
  @Summary
    Sets the GPIO pin, RB5, low using LATB5.

  @Description
    Sets the GPIO pin, RB5, low using LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB5 low (0)
    channel_AN5_SetLow();
    </code>

*/
#define channel_AN5_SetLow()           (_LATB5 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB5, using LATB5.

  @Description
    Toggles the GPIO pin, RB5, using LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB5
    channel_AN5_Toggle();
    </code>

*/
#define channel_AN5_Toggle()           (_LATB5 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB5.

  @Description
    Reads the value of the GPIO pin, RB5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB5
    postValue = channel_AN5_GetValue();
    </code>

*/
#define channel_AN5_GetValue()         _RB5
/**
  @Summary
    Configures the GPIO pin, RB5, as an input.

  @Description
    Configures the GPIO pin, RB5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB5 as an input
    channel_AN5_SetDigitalInput();
    </code>

*/
#define channel_AN5_SetDigitalInput()  (_TRISB5 = 1)
/**
  @Summary
    Configures the GPIO pin, RB5, as an output.

  @Description
    Configures the GPIO pin, RB5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB5 as an output
    channel_AN5_SetDigitalOutput();
    </code>

*/
#define channel_AN5_SetDigitalOutput() (_TRISB5 = 0)
/**
  @Summary
    Sets the GPIO pin, RD10, high using LATD10.

  @Description
    Sets the GPIO pin, RD10, high using LATD10.

  @Preconditions
    The RD10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD10 high (1)
    LEDG_SetHigh();
    </code>

*/
#define LEDG_SetHigh()          (_LATD10 = 1)
/**
  @Summary
    Sets the GPIO pin, RD10, low using LATD10.

  @Description
    Sets the GPIO pin, RD10, low using LATD10.

  @Preconditions
    The RD10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD10 low (0)
    LEDG_SetLow();
    </code>

*/
#define LEDG_SetLow()           (_LATD10 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD10, using LATD10.

  @Description
    Toggles the GPIO pin, RD10, using LATD10.

  @Preconditions
    The RD10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD10
    LEDG_Toggle();
    </code>

*/
#define LEDG_Toggle()           (_LATD10 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD10.

  @Description
    Reads the value of the GPIO pin, RD10.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD10
    postValue = LEDG_GetValue();
    </code>

*/
#define LEDG_GetValue()         _RD10
/**
  @Summary
    Configures the GPIO pin, RD10, as an input.

  @Description
    Configures the GPIO pin, RD10, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD10 as an input
    LEDG_SetDigitalInput();
    </code>

*/
#define LEDG_SetDigitalInput()  (_TRISD10 = 1)
/**
  @Summary
    Configures the GPIO pin, RD10, as an output.

  @Description
    Configures the GPIO pin, RD10, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD10 as an output
    LEDG_SetDigitalOutput();
    </code>

*/
#define LEDG_SetDigitalOutput() (_TRISD10 = 0)
/**
  @Summary
    Sets the GPIO pin, RD11, high using LATD11.

  @Description
    Sets the GPIO pin, RD11, high using LATD11.

  @Preconditions
    The RD11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD11 high (1)
    LEDB_SetHigh();
    </code>

*/
#define LEDB_SetHigh()          (_LATD11 = 1)
/**
  @Summary
    Sets the GPIO pin, RD11, low using LATD11.

  @Description
    Sets the GPIO pin, RD11, low using LATD11.

  @Preconditions
    The RD11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD11 low (0)
    LEDB_SetLow();
    </code>

*/
#define LEDB_SetLow()           (_LATD11 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD11, using LATD11.

  @Description
    Toggles the GPIO pin, RD11, using LATD11.

  @Preconditions
    The RD11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD11
    LEDB_Toggle();
    </code>

*/
#define LEDB_Toggle()           (_LATD11 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD11.

  @Description
    Reads the value of the GPIO pin, RD11.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD11
    postValue = LEDB_GetValue();
    </code>

*/
#define LEDB_GetValue()         _RD11
/**
  @Summary
    Configures the GPIO pin, RD11, as an input.

  @Description
    Configures the GPIO pin, RD11, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD11 as an input
    LEDB_SetDigitalInput();
    </code>

*/
#define LEDB_SetDigitalInput()  (_TRISD11 = 1)
/**
  @Summary
    Configures the GPIO pin, RD11, as an output.

  @Description
    Configures the GPIO pin, RD11, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD11 as an output
    LEDB_SetDigitalOutput();
    </code>

*/
#define LEDB_SetDigitalOutput() (_TRISD11 = 0)
/**
  @Summary
    Sets the GPIO pin, RD9, high using LATD9.

  @Description
    Sets the GPIO pin, RD9, high using LATD9.

  @Preconditions
    The RD9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD9 high (1)
    LEDR_SetHigh();
    </code>

*/
#define LEDR_SetHigh()          (_LATD9 = 1)
/**
  @Summary
    Sets the GPIO pin, RD9, low using LATD9.

  @Description
    Sets the GPIO pin, RD9, low using LATD9.

  @Preconditions
    The RD9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD9 low (0)
    LEDR_SetLow();
    </code>

*/
#define LEDR_SetLow()           (_LATD9 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD9, using LATD9.

  @Description
    Toggles the GPIO pin, RD9, using LATD9.

  @Preconditions
    The RD9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD9
    LEDR_Toggle();
    </code>

*/
#define LEDR_Toggle()           (_LATD9 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD9.

  @Description
    Reads the value of the GPIO pin, RD9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD9
    postValue = LEDR_GetValue();
    </code>

*/
#define LEDR_GetValue()         _RD9
/**
  @Summary
    Configures the GPIO pin, RD9, as an input.

  @Description
    Configures the GPIO pin, RD9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD9 as an input
    LEDR_SetDigitalInput();
    </code>

*/
#define LEDR_SetDigitalInput()  (_TRISD9 = 1)
/**
  @Summary
    Configures the GPIO pin, RD9, as an output.

  @Description
    Configures the GPIO pin, RD9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD9 as an output
    LEDR_SetDigitalOutput();
    </code>

*/
#define LEDR_SetDigitalOutput() (_TRISD9 = 0)

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC24FJ512GU410
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);



#endif
