#include <stdio.h>
int main(void){
    int k,c,a;
    float b,d;
    printf("           1 =Kilogram 2=Kilometer\n");
    printf(" Select unit to be converted: ");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Enter value in Kilograms > ");
        scanf("%f",&b);
        d=b*2.204623;
        printf("%6.2f kilograms = %6.2f Pounds",b,d);
    }
    else if(a==2)
    {
        printf("Enter value in kilometers > ");
        scanf("%f",&b);
        d=b*0.621371;
        printf("%6.2f Kilometers = %6.2f miles",b,d);

    }
    else{
        printf("\n");
        printf("        Wrong selection!\n");
    }


return 0;
}
