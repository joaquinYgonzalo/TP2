#include"MKL25Z4.h"

int main(){
SIM -> SCGC5 |= SIM_SCGCS_PORTA_MASK | SIMSCGC5_PORTB_MASK;
    PORTB->PDDR|=0x00000000;
    PORTA->PDDR|=0XFFFFFFFF;

while(1){
   uint32_t  est_ptB= PTB->PDOR|=0XFFFFFFFF;
        PTA-> PDOR |= est_ptB & 0x23;



}

return 0;

}
