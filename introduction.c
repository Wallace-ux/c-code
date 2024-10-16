#include <stdio.h>
int main(void){
    float a,b,c,d;
        printf("Enter the first value: ");
        scanf("%f",&a);
        printf("Enter the second value: ");
        scanf("%f",&b);
        printf("Enter the third value: ");
        scanf("%f",&c);
        d=a+b+c;
        printf("%6.2f + %6.2f + %6.2f = %6.2f",a,b,c,d);
    return 0;
}
