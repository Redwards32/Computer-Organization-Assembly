
for(i = 0; i < 4; i++)
        four_ints[i] = 2;
printf("%x\n", four_ints[0]);
    four_c = (char*)four_ints;
for(i = 0; i < 4; i++)
        four_c[i] = 'A' + i; // ASCII value of 'A' is 65 or 0x41 in Hex.
    
    // Add your code for the exercises here:
    printf("%x\n", four_ints[0]);
    printf("%x\n", four_ints[1]);
    
    printf("Int values: [");
        for(i = 0; i < 4; i++){
            if(i != 3){
                printf("%x, ", four_ints[i]);
            }
            else{
                printf("%x]\n", four_ints[i]);
            }
        }
    printf("Int addresses : [");
        for(i = 0; i < 4; i++){
            if(i != 3){
                printf("%p, ", &four_ints[i]);
            }
            else{
                printf("%p]\n", &four_ints[i]);
            }
        }
    printf("Chars: [");
        for(i = 0; i < 4; i++){
            if(i != 3){
                printf("%x, ", four_c[i]);
            }else{
                printf("%x]\n", four_c[i]);
            }
        }
    printf("Char Addresses: [");
        for(i = 0; i < 4; i++){
            if(i != 3){
                printf("%p, ", &four_c[i]);
            }
            else{
                printf("%p]\n", &four_c[i]);
            }
        }
            
        return 0;#include <stdio.h>
int main() {
int i;
int four_ints[4];
char* four_c;
for(i = 0; i < 4; i++)
        four_ints[i] = 2;
printf("%x\n", four_ints[0]);
    four_c = (char*)four_ints;
for(i = 0; i < 4; i++)
        four_c[i] = 'A' + i; // ASCII value of 'A' is 65 or 0x41 in Hex.
    
    // Add your code for the exercises here:
    printf("%x\n", four_ints[0]);
    printf("%x\n", four_ints[1]);
    
    printf("Int values: [");
        for(i = 0; i < 4; i++){
            if(i != 3){
                printf("%x, ", four_ints[i]);
            }
            else{
                printf("%x]\n", four_ints[i]);
            }
        }
    printf("Int addresses : [");
        for(i = 0; i < 4; i++){
            if(i != 3){
                printf("%p, ", &four_ints[i]);
            }
            else{
                printf("%p]\n", &four_ints[i]);
            }
        }
    printf("Chars: [");
        for(i = 0; i < 4; i++){
            if(i != 3){
                printf("%x, ", four_c[i]);
            }else{
                printf("%x]\n", four_c[i]);
            }
        }
    printf("Char Addresses: [");
        for(i = 0; i < 4; i++){
            if(i != 3){
                printf("%p, ", &four_c[i]);
            }
            else{
                printf("%p]\n", &four_c[i]);
            }
        }
            
        return 0;
    }
