#include <stdio.h>


char* slice(char str[], int m, int n){
    str = &str[m];
    str[n-m+1] = '\0';

    return str;
}
int main(){
    char str[] = "Harry bhai";
    
    printf("%s", slice(str, 1, 7));
    return 0;
}