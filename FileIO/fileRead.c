#include <stdio.h>


void main (){
    FILE *inRead = fopen("input.in", "r");
    int num=0;

    while(1){
        if (fscanf(inRead, "%d", &num)>0){
        printf("%i ", num);
        }
        else break;
    }     
    printf("\n");
    
   
    fclose(inRead);


}