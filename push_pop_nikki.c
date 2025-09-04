                      /* Code for push pop------> completed */
#include<stdio.h>
void push(int*,int);
void pop(int*,int);
void view(int*,int);
void main()
{
int n,l,top=0;
int stack[10];
do
  {
    printf("1) Push \n2) Pop \n3) view \n4) Exit\n");
    printf("Enter any one option : ");
    scanf("%d",&n);

   switch(n)
         {
           case 1:{ 
                    push(stack,top);

                    break;
                  } 
          case 2:{
                      
                      pop(stack,top);
                      if(n==2)
                    {
                       top--;
                 }
                      break;
                    }
            case 3:{
              
                      view(stack,top);
                      break;
                    }
            case 4:{
                      printf("Exiting the program.\n");
                      return;
                    }
            default : printf("Wrong choice, \n");          
                    
         }
          
         printf("For continue press 1 \n For exit press 0 \n Enter : ");
         scanf("%d",&l);
         if(n==1)
         {
         top++;
         }
         
      
         

}while(l==1);

}

void push(int *x,int y)
{
    int o;
  printf("Enter which value you want to push : ");
  scanf("%d",&o);
          
         
           if(y<=10)
             {             
              x[y] = o;
              printf("Pushed %d onto the stack.\n", o);
             }
             else
              {
                printf("Stack overflow, cannot push more elements.\n");
              }
y++;

}

void pop(int *p,int y)
{
  y--;
  int s; 
  
    if(y >= 0)

      {
        s=p[y];
        printf("%d is popped from stack\n",s);
        y--;   
      }

    else{
         printf("Stack underflow, cannot pop from an empty stack.\n");
        return;
        }
    
}

void view(int *x,int z)
{
for(int i = 0; i<=z-1; i++)
   {
        printf(" Value %d ", x[i]);
        printf(" index %d\n",i);
    }
}