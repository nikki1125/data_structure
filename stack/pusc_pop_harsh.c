#include<stdio.h>
void push();
void pop();
void view();
int top=-1;
int front=-1;
int stack[10];
void main()
{   int n,l;

do{

    printf("1).PUSH\n2).POP\n3).VIEW\n4).EXIT\n");
    printf("Choose the option from menu : ");
    scanf("%d",&n);
    switch(n)
            
             {
                 case 1:{
                          push();
                           break;
                        }
                 case 2:{
                          pop();
                          break;
                     
                        }
                 case 3:{
                          view();
                           break;
                     
                        }
                 case 4:{
                      printf("Exiting the program.\n");
                      return;
                    }
                 default : printf("You choosed out of range ");
             }
             
                 printf("Do you wantt to continue for yes==1  for no==0\nEnter here : ");
                 scanf("%d",&l);
             
             
             
  } while(l==1);            
             
             
}

void push()
{
    
    if(top<=10)
      {
       top++;
       int x;
       printf("Enter which value you want to push : ");
       scanf("%d",&x);
       stack[top]=x;
      }
     else if(top>10)
            {
                printf("Stack is overflow ");
            }
}


void pop()
{
    if(top>front)
       {
        top--;
        int y;
        y=stack[top];
       }
       
       
    else if(top==front)
           {
               printf("Stack is underflow");
           }
}


void view()
{
    int i;
    for (i=0;i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }
}