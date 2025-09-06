#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter your number");
    scanf("%d",&n);

    if(n<0)
    {


        printf("ans. is impossible\n");
       }
if(n==0)
{


    printf("Your answer is 1");
}

else{

    for(i=1; i<=n;i++)
    {
        fact=fact*i;
        }
    printf("ans is %d=%d\n", n,fact);

}


return 0;

}
