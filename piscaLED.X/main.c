/*
 * File:   main.c
 * Author: 21276660
 *
 * Created on 17 de Fevereiro de 2022, 09:50
 */
#define _XTAL_FREQ 4000000
#include "config.h"
#include <xc.h>

void main(void) 
    
{
    PORTDbits.RD0 =0;
    TRISDbits.TRISD0 =0;
    
    while(1)
        
    { 
        PORTDbits.RD0 =1;
        __delay_ms(500);
        PORTDbits.RD0 =0;
        __delay_ms(500);
    }
    return;
}
