#include "MKL25Z4.h"

int pinesA [i]={A0,A2,A4,A6};
int pinesAA[i]={A1,A3,A5,A7};
int pinB[1]{B0};
int main(){
    SIM -> SCGC5 |= SIM_SCGCS_PORTA_MASK | SIM_SCGC5_PORTB_MASK;
    PORTB->PDDR|=0x00000000;
    PORTA->PDDR|=0XFFFFFFFF;
    
    while(1){
        uint32_t est_ptB=PTB->PDIR;
        for (int i = 0; i < 4; i++){
            if(PORTB->PCR[0]|=PORT_PCR_MUX(0)){
              PTA[i]->PSOR|=(1u<<i);
            }else{
              PTAA[i]->PSOR|=(0u<<i);
        }
      }
    }
return 0;
}
