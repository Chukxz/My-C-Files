#include <stdio.h>

// #define PI 3.14

int main(){
    printf("Hello World!\n");
    printf("int: %ld bytes\n",sizeof(int));
    printf("float: %ld bytes\n",sizeof(float));
    printf("double: %ld byte\n",sizeof(double));
    printf("char: %d bytes\n",sizeof(char));

    // const double PI = 3.14;

    // printf("The value of constant Pi is: %f",PI);
    return 0;
}