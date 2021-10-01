#include <stdio.h>
#include <stdlib.h>

void findSum()
{
    int n,sum=0;
    printf("Enter the number to find Sum:: ");
    scanf("%d",&n);
    
    sum = (n*n + n)/2;
    
    printf("Sum of %d natural numbers:: %d",n,sum);
}

int isPrime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void findPrime()
{
    int n;
    
    printf("Enter a number to check prime:: ");
    scanf("%d",&n);
    
    isPrime(n);
    
    if(isPrime(n)==1)
    {
        printf("%d is Prime.",n);
    }
    else
    {
        printf("%d is not Prime.",n);
    }
}

void printPrime()
{
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    
    printf("Prime numbers between %d to %d is: ",n1,n2);
    for(int i=n1; i<=n2; i++)
    {
        if(isPrime(i))
        {
            printf("%d ", i);
        }
    }
}

void findFactorial()
{
    int val = 1, n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if(n==0||n==1)
    {
        printf("Factorial of %d is: %d",n,val);
    }
    else if(n<0)
    {
        printf("Please enter a valid Number!");
    }
    else
    {
        for(int i=n;i>=2;i--)
        {
            val*=i;
        }
        printf("Factorial of %d is: %d",n,val);
    }
    
}

void findLength()
{
    long long int n,temp;
    int len=0;
    printf("Enter a Number: ");
    scanf("%lld",&n);
    temp = n;
    
    if(n==0)
    {
        printf("Length of %lld is: 0",n);
        return;
    }
    while(temp!=0)
    {
        temp = temp/10;
        len++;
    }
    printf("Length of %lld is: %d",n,len);
}

void printReverse()
{
    long long int n,temp,num=0;
    int rem;
    printf("Enter a Number: ");
    scanf("%lld",&n);
    temp = n;
    
    while(temp!=0)
    {
        rem = temp%10;
        num = num*10 + rem;
        temp = temp/10;
    }
    
    printf("Revese of %lld is: %lld",n,num);
}

void findPower()
{
    int m,n, val=1;
    printf("Enter the value of m & n in m to power 1: ");
    scanf("%d%d",&m,&n);
    
    for(int i=1;i<=n;i++)
    {
        val*=m;
    }
    printf("Value of %d to %d: %d", m,n,val);
}

int main()
{
    int option;
    do
    {
        printf("\n\n***Main Program***\n");
        printf("Enter your Choice:\n");
        printf("1. Find Sum\n");
        printf("2. Check Prime\n");
        printf("3. Print Primes\n");
        printf("4. Find Factorial\n");
        printf("5. Find length of a number\n");
        printf("6. Print reverse of a number\n");
        printf("7. Power of a number\n");
        printf("0. Exit\n");
        scanf("%d",&option);
        
        switch(option)
        {
        case 1:
            findSum();
            break;
            
        case 2:
            findPrime();
            break;
            
        case 3:
            printPrime();
            break;
            
        case 4:
            findFactorial();
            break;
            
        case 5:
            findLength();
            break;
            
        case 6:
            printReverse();
            break;
            
        case 7:
            findPower();
            break;
            
        case 0:
            printf("You Successfully exited this Program.");
            exit(0);
            break;
            
        default:
            printf("Enter a valid option!");
            break;
        }
            
    }while(option!=0);
    
    return 0;
}
