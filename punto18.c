#include "MKL25Z4.h"

int pinesA [4]={A0,A1,A2,A3};
int pinesB[4]={A4,A5,A6,A7};
int main(){
    SIM -> SCGC5 |= SIM_SCGCS_PORTA_MASK | SIM_SCGC5_PORTB_MASK;
    PORTB->PDDR|=0x00000000;
    PORTA->PDDR|=0XFFFFFFFF;
    
    while(1){
        uint32_t est_ptB=PTB->PDOR;
        for (i = 0; i < 4; i++){
           // if( est_ptB0->PDDR|=0XFFFFFFFF){
              PTpinesA[i]->PSOR|=(1U<<i);
              PTpinesB[i]->PSOR|=(0U<<i);
        }
      }
      return 0;   
    }