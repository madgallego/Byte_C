#include <stdio.h>

int main(){

    int arr[] = { 1, 4, 7, 14, 15, 16, 22, 25};
    int size = 8;
    int key = 22;
    int flag = 0; // to check
    int first= 0;
    int last = size-1;
    int mid;

    while (first <= last) {

        mid = (last + first) / 2;

        if (arr[mid] < key) {
            first = mid + 1;
        }
        else if (arr[mid] > key) {
            last = mid - 1;
        }
        else if (arr[mid] == key) {
                    flag = 1;
                    break;
                }
        
    }

    if (flag==0) printf("Key Not Found\n");
    else printf("Key value %d fount at index %d\n", key, mid);

}