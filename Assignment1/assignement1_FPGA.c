#include <stdio.h>
int main(){
    unsigned char out1,out2; //output
    unsigned char chk = 0x01;//used for displaying the output in bit
    unsigned char A=0x00,B=0x01,C=0x00,D=0x00; //inputs in hex
    // POS Expression NORMAL EXPRESSION
    out1 = B|(~C&D);
   // SOP Expression & used for NAND implementation
    out2 = ~(~B&(~(~C&D)));
    printf("inputs for BCD as %x%x%x",chk&B,chk&C,chk&D);
   printf("\nNormal output %x\nNAND implementation %x",chk&out1 ,chk&out2);
    return 0;
}
