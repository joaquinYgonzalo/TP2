#include “MKL25Z4.h”


int main(){

    SIM -> SCGC5 |= SIM_SCGCS_PORTA_MASK | SIMSCGC5_PORTB_MASK;
    PORTB->PDDR|=0x00000000;
    PORTA->PDDR|=0XFFFFFFFF;
    
    while(1){
        uint32_t est_ptB=PTB->PDIR;
        PTA-> PDOR |= est_ptB;
    }
    return 0;
}