#include<stdio.h>
void main()
{
    int a[20],i,n,pos,v;
    printf("How many number you want to enter :");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);
    for(i=1;i<=n;i++)
       {
        scanf("%d",&a[i]);
       }
    printf("Which position you want to modify : ");
    scanf("%d",&pos);
    printf("Enter new number : ");
    scanf("%d",&v);
    for(i=1;i<=n;i++)
    {
        if(i==pos)
        {
            a[i]=v;
        }
    }
    printf("Now your elements are : ");
    for(i=1;i<=n;i++)   
       {
        printf("%d ",a[i]);
       }


}