                     /*insert any element into array*/
#include<stdio.h>
void main()
{
    int a[20],i,n,x,pos;
    printf("How many element you want to enter : ");
    scanf("%d",&n);
    printf("Enter %d numbers :-\n",n);
    for(i=1;i<=n;i++)
       {
        scanf("%d",&a[i]);
       }
    printf("Enter which new number you want to enter : ");
    scanf("%d",&x);
    printf("On which position you want to enter this new number : ");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
       {
        if(i>=pos)
        {
            a[i+1]=a[i];
            //a[i]=x;
        }
         if(i==pos)
        {
            a[i]=x;
        }
       
       }
for(i=1;i<=n+1;i++)
   {
    printf("%d ",a[i]);
   }
}