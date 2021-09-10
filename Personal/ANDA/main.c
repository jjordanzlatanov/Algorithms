#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printer(char *arr, int size, int ssize){
    char *k = arr;
    
    for(int i = 0; i < size; i++, k += ssize, arr = k){
        if(*arr == '\0'){
            continue;
        }

        while(*arr != '\0'){
            printf("%c", *arr);
            arr++;
        }

        printf("\n");
    }
}

int main(){
    char arr[5][10];
    strcpy(arr[0], "1");
    strcpy(arr[1], "");
    strcpy(arr[2], "3");
    strcpy(arr[3], "4");
    strcpy(arr[4], "");
    printer(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]));
    return 0;
}