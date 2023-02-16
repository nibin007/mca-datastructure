#include <stdio.h>
#include <stdlib.h>

struct node{
 int value;
 struct node *prev;
 struct node *next;

}*start=NULL;

void insertbegin();
void display();
void insertend();

int main(){
    int ch;
    printf("\n\t enter your choices");
    printf("\n\t 1.insertatbeginning \n\t 2.displayfrom start \n\t ");
    
    while(1){
      printf("\n\t enter your choice\n");
      scanf("\n%d",&ch);
      switch(ch){
       case 1:
           insertbegin();
           break;
       case 2:
           display();
           break;
       case 3:
           insertend();
           break;
           
       default:
          printf("wrong choice");
          break;
      
      }
    
    }
 
 
 }
 
void display(){
struct node *temp;
if (start==NULL){
  printf("\n list is empty");

}
else{
temp=start;
   while(temp!=NULL){
      printf("%d->",temp->value);
      temp=temp->next;

	
   }
}




} 
 
 
void insertbegin(){
struct node *temp;
int data;

temp=(struct node *)malloc(sizeof(struct node));
 if(temp==NULL)
 {
  printf("\nOut of Memory Space ");
  return;
 }
else{
printf("\n enter element to insert \n");
scanf("%d",&data);
temp->value=data;
   if(start==NULL){
      start=temp;
      temp->next=NULL;
      temp->prev=NULL;
 }
  else{
     temp->next=start;
     temp->prev=NULL;
     start->prev=temp;
     start=temp;
  
  }
printf("\n\t element inserted");

}


}


void insertend(){
struct node *node1;
struct node *temp;
struct node *ptr;
int data;

node1=(struct node *)malloc(sizeof(struct node));
printf("\nenter the value to be inserted\n");
scanf("%d",&data);
node1->value=data;
   if(start==NULL){
      start=node1;
      node1->next=NULL;
      node1->prev=NULL;
 }
  else{
    temp=start;
    while(temp!=NULL){
      ptr=temp;
      temp=temp->next;
  }
 ptr->next=node1;
 node1->prev=ptr;
 node1->next=NULL;
 printf("element inserted"); 


}
}
