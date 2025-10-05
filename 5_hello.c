#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,isPrime=1;
    printf("\n enter a positive integer");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("\n %d is not a prime number",num);
        return 0;
    }
    
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            isPrime=0;
            break;

        }
    }
    if(isPrime)
    printf("\n %d is a prime number",num);
    else 
    printf("\n %d is not a prime number",num);
    return 0;
    }