#include<stdio.h>


int queue[50],n,i,front=-1,rear=-1,ch;
void push();
void pop();
void peak();
void display();
void main()
{
  char c;
 printf("Enter size of queue");
 scanf("%d",&n); 
  do
  {
 printf("Queue OPERATIONS \n\n 1.Push \n\n 2.Pop \n\n 3.Display \n\n 4.peak\n\n");
 scanf("%d",&ch);
 switch(ch)
     {
 	case 1: push();
  	break;
  	case 2: pop();
  	break;
  	
  	case 3: display();
  	break;
  	
       case 4: peak();
  	break;
  	
     }
   printf("Do you want to continue? (y/n) \n");
   scanf("%s",&c);
 }
 while(c=='y');
}
int isempty()
 {
  if(rear<front)
    return 1;
  else
     return 0;
  }
int isfull()
{
  if(rear==n-1)
     return 1;
  else
      return 0;
}  
void push()
{ int data;
    


    if(!isfull()){
       printf("\n\n Enter element to push \n");
       scanf("%d",&data);
       if(front==-1)
       {
         front=0;
         rear=rear+1;
         queue[rear]=data;  
         printf("element added is %d",queue[rear]);
   
       }
       else
       {
         rear=rear+1;
         
         queue[rear]=data;  
         printf("element added is %d",queue[rear]);
  
       }
    }
   else
   {
     printf("overflow");
   
   }


}
void display()
{
 for(i=front;i<=rear;i++)
   {
      printf("\n %d",queue[i]);
   
   }


}
void pop()
{ int data;
   if(!isempty())
   { 
      data=queue[front];
      front=front+1;
      printf("\n element deleted is %d",data);
   
   
   
   }
   else
   {
   
     printf("\n underflow");
   }

}
void peak()
{
 printf("\n peak element is --- ");
 printf("\n %d ",queue[front]);
 



}




  
  
