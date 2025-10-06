//C Program to Multiply 2 floating point numbers
#include<stdio.h>
int main()
{
    float num1,num2,product;
    printf("\nenter any 2 decimal numbers:");
    scanf("%f %f",&num1,&num2);
    product=num1*num2;
    //output will be with 6 decimal places by default
    //to change the number of decimal places,use %.nf where n is the number of decimal places
    //for example,to print with 2 decimal places,use %.2f 
    printf("\nproduct=%.2f  ",product);
    return 0;


}