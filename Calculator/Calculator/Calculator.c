// Online C compiler to run C program online
#include <stdio.h>

int add(int a , int b){

    printf("Addition of %d and %d is",a,b);
              int result=a+b;
            return   printf(" %d\n\n",result);

}

int Subtraction(int a , int b){
    printf("Subtraction of %d and %d is",a,b);
              int result=a-b;
            return   printf(" %d\n\n",result);

}

int Multiplication(int a , int b){
    printf("Multiplication of %d and %d is",a,b);
              int result=a*b;
            return   printf(" %d\n\n",result);

}

int Division(float a , float b){
    printf("Division of %.2f and %.2f is",a,b);
              float result=a/b;
            return   printf(" %.2f\n\n",result);

}

int Modulus(int a , int b){
    printf("Modulus of %d and %d is",a,b);
              int result=a%b;
          return  printf(" %d\n\n",result);

}

int main() {

    int choice;
    int num1,num2;

    do{
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %\n");
        printf("Press 0 for The exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        if(choice==0){
            printf("\nExiting The Calculator");
            break;
        }
        printf("Enter the first number : ");
        scanf("%d",&num1);

        printf("Enter the second number : ");
        scanf("%d",&num2);


        switch(choice){
            case 1:
           add(num1,num2);
            break;

            case 2:
            Subtraction(num1,num2);
            break;

            case 3:
            Multiplication(num1,num2);
            break;

            case 4:
            Division(num1,num2);
            break;

            case 5:
            Modulus(num1,num2);

            default:
            printf("Invalid value \n\n");
        }

    }while(1);

}


