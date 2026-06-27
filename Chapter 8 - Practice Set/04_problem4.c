#include <stdio.h>

char* slice(char str[], int m, int n){
    char *ptr = &str[m];
    ptr[n - m + 1] = '\0';

    return ptr;
}

int main(){
    char str[] = "Himanshu Srivastav";

    printf("%s\n", slice(str, 6, 11)); // Output: hu Sri
    return 0;
}