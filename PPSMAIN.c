#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int a,b,c,d;
    printf("1.BMI CALCULATION\n2.CALCULATOR\n3.PROFIT OR LOSS\n ");
    
    scanf("%d",&a);
    if (a==2){
         printf("ADDITION(3)\n SUBSTRACTION(4)\n DIVISION(5)\n MULTIPLICATION(6)\n POWER(7)\n");
         int i;

         scanf("%d",&i);
         if (i==3){
            printf("Enter First No: ");
            int g,h;
            scanf("%d",&g);
            printf("Enter Second No: ");
            
            scanf("%d",&h);
            printf("Sum is %d",g+h);

         }
         if (i==4){
            printf("Enter First No: ");
            int j;
            scanf("%d",&j);
            printf("Enter Second no:");
            int k;
            scanf("%d",&k);
            printf("Subtraction is %d",j-k);
         }
         if (i==5){
            printf("Enter First No: ");
            float l;
            scanf("%f",&l);
            printf("Enter Second No:");
            float m;
            scanf("%f",&m);
            printf("Division is %.2f",l/m);

         }
         if(i==6){
            printf("Enter First No: ");
            int o;
            scanf("%d",&o);
            printf("Enter Second No: ");
            int p;
            scanf("%d",&p);
            printf("Multiplication is %d",o*p);

         }
         if (i==7){
            printf("Enter Number: ");
            double q;
            scanf("%lf",&q);
            double r;
            printf("Enter Power: ");
            scanf("%lf",&r);
           double result=pow(q,r);
            printf("%0.f^%0.f=%.2f",q,r,result);
         }

    }
    switch(a){
        case 1:
        printf("Enter Your Weight(kg): ");
        scanf("%d",&b);
        printf("Enter Your Height(m): ");
        scanf("%d",&c);
        
        printf("Your BMi Value is: %d",(b*b)/c);
        break;
        case 3:
        printf("Enter CostPrice: ");
        int e;
        scanf("%d",&e);
        printf("Enter SellingPrice: ");
        int f;
        scanf("%d",&f);
        if (e>f){
            printf("Loss of %drs",e-f);

        }
        if(e<f){
            printf("Profit of %drs",f-e);

        }
        if(e==f){
         printf("Neither Profit nor Loss ");
        }
        break;
        
       
        
    }

    return 0;

}
