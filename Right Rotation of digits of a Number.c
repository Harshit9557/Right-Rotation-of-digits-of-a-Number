#include<stdio.h>
int rot(int);
int main()
{
    int n;
    printf("Enter any number :\n");
    scanf("%d",&n);
    rot(n);
    return 0;
}
int rot(int x)
{
    int i,j,a[100],c=0,r,t,b=x;
    printf("Enter the number of rotations :\n");
    scanf("%d",&r);
    while(x!=0)
    {
        x=x/10;
        c++;
    }
    for(i=c-1;i>=0;i--)
    {
        t=b%10;
        a[i]=t;
        b=b/10;
    }
    for(i=0;i<r;i++)
    {
        t=a[0];
        for(j=0;j<c;j++)
            a[j]=a[j+1];
        a[c-1]=t;
    }
    for(i=0;i<c;i++)
        printf("%d",a[i]);
    return 0;
}
