// add a program for a calculator(+, -, *, /) in C
#include<stdio.h>
void Input(){
printf("Type number to choose the algorithm\n");
printf( " 1. + \n 2. - \n 3. *\n 4. / \n 5.Exit\n InputNum: ");
}
 int main()
{
   int InputNum=0;
   float a=0;
   float b=0;
   float result=0;
 do{
    Input();
    scanf("%d", &InputNum);
    switch(InputNum){
   case(1):
       printf("Enter First Number: ");
       scanf("%f", &a);
       printf("Enter Second Number: ");
       scanf("%f", &b);
       result = a + b;
       printf("%.2f + %.2f = %.2f\n",a , b, result);
       break;
   case(2):
       printf("Enter First Number: ");
       scanf("%f", &a);
       printf("Enter Second Number: ");
       scanf("%f", &b);
       result = a - b;
       printf("%.2f - %.2f = %.2f\n",a ,b, result);
       break;
   case(3):
       printf("Enter First Number: ");
       scanf("%f", &a);
       printf("Enter Second Number: ");
       scanf("%f", &b);
       result = a * b;
       printf("%.2f * %.2f = %.2f\n",a ,b, result);
       break;
   case(4):
       printf("Enter Dividend: ");
       scanf("%f", &a);
       printf("Enter Divisor: ");
       scanf("%f", &b);
       if (b == 0){
            printf("Please check the divisor that can not be zero.\n");
       }
       else{
           result = a / b;
           printf("%.2f / %.2f = %.2f\n",a ,b, result);
       }
       break;
   case(5):
       printf("Thank you for using code !!\n");
       break;
    default:
       printf("Invalid number, please choose again.\n");
   }
 }while(InputNum);
   return 0;
}

