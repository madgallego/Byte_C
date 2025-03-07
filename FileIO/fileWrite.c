#include <stdio.h>


void main (){
    FILE *inRead = fopen("input.in", "r");
    FILE *outWrite = fopen("output.txt", "w");
    int num=0;

    while(1){
        if (fscanf(inRead, "%d", &num)>0){

        fprintf(outWrite,"%i ", num);

        }
        else break;
    }

    fclose(inRead);
    fclose(outWrite);


}