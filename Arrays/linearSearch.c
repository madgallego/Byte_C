#include <stdio.h>

int main(){
    int arr[] = { 1, 4, 7, 14, 15, 16, 22, 25};
    int size = 8;
    int key = 22;

    for (int i = 0; i < size; i++) {

        // If key is found, return key
        if (arr[i] == key) {
            printf("Key value %d fount at index %d\n", key, i);
        }
        else printf("Key Not Found\n");

    }


}