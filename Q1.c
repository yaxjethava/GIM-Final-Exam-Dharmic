#include<stdio.h>
void main(){
    int i,fact,n;
    fact=1;
    i=1;
    printf("\n enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i=i+1;

    }
    printf("\n your fact is %d",fact);
}
