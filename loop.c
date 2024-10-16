#include <stdio.h>
int main(void){
    float a,b,c;
    printf("Input the starting point: ");
    scanf("%f",&a);
    printf("Input the ending: ");
    scanf("%f",&c);
    printf("Input the increment: ");
    scanf("%f",&b);
    printf("\n\n");
    printf("         FARHENHEIT-CELCIUS TABLE\n\n");
    while (a<c){
        printf("%3.0f Degrees Celcius = %3.2f degrees Fahrenheit\n", a,(a-32)*5/9);
        a=a+b;
    }
    return 0;
}
