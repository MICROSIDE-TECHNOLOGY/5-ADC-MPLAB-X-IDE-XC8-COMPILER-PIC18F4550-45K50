/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC18F45K50
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip software and any
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party
    license terms applicable to your use of third party software (including open source software) that
    may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS
    FOR A PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

int ValorPot;

void main( void )
{
    SYSTEM_Initialize();                 // Configura el dispositivo

    while ( 1 ) {
        ValorPot = ADC_GetConversion( channel_AN0 );
        if ( ValorPot <= 112 ) {         // Compara el valor de el ADC con 112
            LATB = 0b00000000;           // Leds activos
        } else if ( ValorPot <= 224 ) {  
            LATB = 0b00000001;           
        } else if ( ValorPot <= 336 ) {  
            LATB = 0b00000011;           
        } else if ( ValorPot <= 448 ) {  
            LATB = 0b00000111;           
        } else if ( ValorPot <= 560 ) {  
            LATB = 0b00001111;           
        } else if ( ValorPot <= 672 ) {  
            LATB = 0b00011111;           
        } else if ( ValorPot <= 784 ) {  
            LATB = 0b00111111;           
        } else if ( ValorPot <= 950 ) {  
            LATB = 0b01111111;           
        } else if ( ValorPot <= 1000 ) { 
            LATB = 0b11111111;           
        }
    }
}
/**
 End of File
*/