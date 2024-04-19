#include "MKL25Z4.h"

int pinesA [4]={A0,A2,A4,A6};
int pinesB[4]={A1,A3,A5,A7};
int main(){
    SIM -> SCGC5 |= SIM_SCGCS_PORTA_MASK | SIMSCGC5_PORTB0_MASK;
    PORTB0->PDDR|=0x00000000;
    PORTA->PDDR|=0XFFFFFFFF;
    
    while(1){
        uint32_t est_ptB0=PTB0->PDOR;
        for (i = 0; i < 4; i++){
            if( est_ptB0->PDDR|=0x00000000){
              PORTpinesA[i]->PDDR|=0XFFFFFFFF;
            }else{
              PORTpinesB[i]->PDDR|=0XFFFFFFFF;
            }
        }
      }
      return 0;   
    }