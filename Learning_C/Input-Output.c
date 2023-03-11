#include <stdio.h>

int main(){
    char a = getchar();
    printf("You entered: %c",a);
    
    char b[10];
    gets(b);
    printf("You entered: %s",b);
    return 0;

}