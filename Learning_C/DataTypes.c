#include <stdio.h>

int main(){
    printf("Size of int in bytes: %d\n",(sizeof(int)));
    printf("Size of signed int in bytes: %d\n",sizeof(signed int));
    printf("Size of unsigned int in bytes: %d\n",(sizeof(unsigned int)));
    printf("Size of short int in bytes: %d\n",sizeof(short int));
    printf("Size of short signed int in bytes: %d\n",sizeof(short signed int));
    printf("Size of short unsigned int in bytes: %d\n",sizeof(short unsigned int));
    printf("Size of long int in bytes: %d\n",sizeof(long int));
    printf("Size of long unsigned int in bytes: %d\n",sizeof(long unsigned int));
    printf("Size of long signed int in bytes: %d\n",sizeof(long signed int));
    printf("Size of long long int in bytes: %d\n",sizeof(long long int));
    printf("Size of long long unsigned int in bytes: %d\n",sizeof(long long unsigned int));
    printf("Size of long long signed int in bytes: %d\n",sizeof(long long signed int));
    printf("Size of float in bytes: %d\n",(sizeof(float)));
    printf("Size of double in bytes: %d\n",(sizeof(double)));
    printf("Size of long double in bytes: %d\n",(sizeof(long double)));
    printf("Size of char in bytes %d\n",sizeof(char));

    return 0;
}