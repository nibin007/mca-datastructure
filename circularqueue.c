#include <stdio.h>
#include <stdlib.h>

void display();
void dequeue();
void enqueue ();
int que[100], n;
int front = -1;
int rear = -1;

int
main ()
{
  int ch;
  printf ("\n enter the limit of queue");
  scanf ("%d", &n);


  do
    {
      printf ("\n\tQueue Operations-----\n");
      printf("\n\t1-Enqueue\n\t2-Dequeue\n\t3-Display\n\t4-Exit\n\nEnter your choice: ");
       scanf("%d",&ch);
      switch (ch)
	{
	case 1:
	  enqueue ();
	  break;
    case 2:
       dequeue();
       break;
    case 3:
        display();
        break;
	}


    }
  while (ch < 4);


}


void
enqueue ()
{
  int data;
  if (front == -1 && rear == -1)
    {
      front = 0;
      rear = 0;
      printf ("enter the element to insert");
       scanf ("%d", &data);
      que[rear] = data;
      printf ("element inserted successfully");
    }
  else if ((rear + 1) % n == front)
    {
      printf ("queue is full");


    }
  else
    {
      printf ("enter the element to insert");
      scanf ("%d", &data);
      rear = (rear + 1) % n;
      que[rear] = data;
      printf ("element inserted successfully");

    }


}
  void dequeue(){
      if(front ==-1 && rear==-1){
          printf("queue is empty");
          
      }
      else if(front==rear){
          printf("%d which is the last element deleted from queue",que[front]);
          front=-1;
          rear=-1;
          
      }
      else{
          printf("%d  deleted from queue",que[front]);
          front=(front+1)%n;
          
          
      }
      
      
  }
  
  void display(){
      int i =front;
      if(front==-1 &&rear==-1){
          printf("que is empty");
      }
      else{printf("\n queue elements are---");
          while(i!=rear){
             printf("\n %d",que[i]);
             i=(i+1)%n;
             
              
          }
          printf("\n %d",que[rear]);
          
      }
      
  }
