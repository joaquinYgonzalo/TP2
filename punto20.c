#include "MKL25Z4.h"

int pinesA [i]={A0,A1,A2,A3,A4,A5,A6,A7};
int pinesB[j]={B0,B1,B2,B3};
int main(){
    int i, j;
    int est_B0=PTB->PDIR|=(PTB>>1),est_B1=PTB->PDIR|=(PTB>>2),est_B2=PTB->PDIR|=(PTB>>3),est_B3=PTB->PDIR|=(PTB>>4);
    for(j=0;j<4;j++){
        PORTB->PCR[4]|=PORT_PCR_MUX(0);
    }
    for(i=0;i<8;i++){
        PORTA->PCR[8]|=PORT_PCR_MUX(1);
    }
    while (1){
        
        
        if(est_B0==1){
            PTA->PSOR|=(1u<<0);
            PTA->PSOR|=(1u<<1);
        }else if(est_B1==1){
            PTA->PSOR|=(1u<<2);
            PTA->PSOR|=(1u<<3);
        }else if(est_B2==1){
            PTA->PSOR|=(1u<<4);
            PTA->PSOR|=(1u<<5);
        } else if(est_B3==1){
            PTA->PSOR|=(1u<<6);
            PTA->PSOR|=(1u<<7);
        }       
    }
}