#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t\tCALCULATOR\n\n\n");
    int choice;
    printf("\t\t\t\t\t\t\t\t|Users are requested to enter number according to their operator need|\n\n");
    printf("\n");
    printf("\t\t\t\t\t\t********************************************************************************************************");
    printf("\n");
     printf("\t\t\t\t\t\t\t\t\t\t------PRESS '0' TO QUIT THE PROGRAM------\n" );
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '1' for ADDITION (+) \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '2' for SUBTRACTION (-) \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '3' for MULTIPLICATION (*) \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '4' for DIVISION (/) \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '5' for MODULUS \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '6' for POWER (^) \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '7' for FACTORIAL(!) \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '8' for SQUARE \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '9' for CUBE  \n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter '10' for SQUAREROOT \n");
    printf("\n");
    printf("\t\t\t\t\t\t********************************************************************************************************");
    printf("\n");
    while(1)
    {

   printf("\t\t\t\t\t\t\t\t\t\t Enter the operation you want to do: ");
   scanf("%d",&choice);
   printf("\t\t\t\t\t\t********************************************************************************************************");
   printf("\n\n");
   switch(choice)
   {
       case 1:
       addition();
       break;
       case 2:
       subtraction();
       break;
       case 3:
       multiplication();
       break;
       case 4:
       division();
       break;
       case 5:
       modulus();
       break;
       case 6:
       power();
       break;
       case 7:
       factorial();
       break;
       case 8:
       square();
       break;
       case 9:
       cube();
       break;
       case 10:
       squareroot();
       case 0:
       exit(0);
       default:
       printf(" \t\t\t\t\t\t\t\t\t\t!! PLEASE ENTER VALID OPERATION!!");
       exit(0);

     }
      printf("\t\t\t\t\t\t********************************************************************************************************");
   }
      return 0;
}


void addition(){
    printf("\t\t\t\t\t\t\t\t\t\tEnter the numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\t\t\t\t\t\t\t\t\t\t-->The sum of a and b is %d\n",a+b);
}
void subtraction(){
    printf("\t\t\t\t\t\t\t\t\t\tEnter the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\t\t\t\t\t\t\t\t\t\t-->The subtraction of a and b is %d\n",a-b);
}
void multiplication(){
    printf("\t\t\t\t\t\t\t\t\t\tEnter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\t\t\t\t\t\t\t\t\t\t-->The multiplication of a and b is %d\n",a*b);
}
void division(){
    printf("\t\t\t\t\t\t\t\t\t\tEnter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\t\t\t\t\t\t\t\t\t\t-->The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("\t\t\t\t\t\t\t\t\t\tEnter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\t\t\t\t\t\t\t\t\t\t-->The modulus of a and b is %d\n",a%b);
}
void factorial(){
    int n,factorial;
    printf("\t\t\t\t\t\t\t\t\t\tEnter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\n\t\t\t\t\t\t\t\t\t\t-->Factorial of %d is %d",n,factorial);
}
void power(){
    double b;
    double p;
    printf("\t\t\t\t\t\t\t\t\t\tEnter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("\t\t\t\t\t\t\t\t\t\t-->The power is %lf",e);
}
void square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("\t\t\t\t\t\t\t\t\t\t-->The square of %lf is %lf",b,p);
}
void cube(){
    double b;
    printf("\t\t\t\t\t\t\t\t\t\tEnter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("\t\t\t\t\t\t\t\t\t\t-->The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b;
    printf("\t\t\t\t\t\t\t\t\t\tEnter the number you want the square root of : ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("\t\t\t\t\t\t\t\t\t\t-->The square root of %lf is %lf",b,s);
}






