#include<stdio.h>
void main()
{
    int a[20],n,x,pos,i;
    printf("How many element you want to enter : ");
    scanf("%d",&n);
    printf("Enter %d numbers :-\n",n);      
    for(i=1;i<=n;i++)
       {
        scanf("%d",&a[i]);
       }
    //printf("Enter which new number you want to delete : ");
    //scanf("%d",&x);
    printf("from which position you want to delete element : ");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
       {
        a[i]=a[i+1];
       }
    printf("Now your elements are : ");
    for(i=1;i<n;i++)
       {
        printf("%d ",a[i]);
       }  
}