# C Program to do multi task with 2 nos
#include<math.h>
#include <stdio.h>
int main()
{
    int n1,n2,add,sub,multi,divison,mod;
    printf("Enter first number:");
    scanf ("%d",&n1);
    printf("Enter second number:");
    scanf ("%d",&n2);
    add=n1+n2;
    multi=n1*n2;
    if(n1>n2)
    {
    sub= n1-n2;
    divison= n1/n2;
    mod= n1%n2;
    }
    else
    {
    sub=n2-n1;
    divison=n2/n1;
    mod= n2%n1;
    }
    printf("Addition=%d\n",add);
    printf("Substraction=%d\n",sub);
    printf("Multiplication=%d\n",multi);
    printf("Divison=%d\n",divison);
    printf("Modulus=%d\n",mod);
    return 0;
}
© 2021 GitHub, Inc.
