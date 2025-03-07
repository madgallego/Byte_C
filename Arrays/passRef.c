#include <stdio.h>

void moddedPrint( int *num){
    printf("\nVersion in Modded\n");
    for (int i = 0; i < 10; i++)
    {
        num[i]+=1;
        printf("%d ", num[i]);
    }
    
}

int main () {

    int numbers [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("\nVersion in Main BEFORE Modded:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    
    //function call and passing of array values
    moddedPrint(numbers);

    printf("\nVersion in Main AFTER Modded:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", numbers[j]);
    }
    printf("\n");
}