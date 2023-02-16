#include <stdio.h>
#include <stdlib.h>

struct btnode{
  int value;
  struct btnode *lchild;
  struct btnode *rchild;
  }*temp=NULL,*root=NULL;


void insert();
void create();  
void search(struct btnode *t);
void inorder(struct  btnode *t);
void preorder(struct  btnode *t);
void postorder(struct  btnode *t);
int main(){
    int ch;
    printf("\n\t enter your choices");
    printf("\n\t 1.insert \n\t 2.inorder display \n\t 3.preorder display \n\t 4.post order display");
    
    while(1){
      printf("\n\t enter your choice\n");
      scanf("\n%d",&ch);
      switch(ch){
       case 1:
           insert();
           break;
       case 2:
           inorder(root);
           break;
       case 3:
           preorder(root);
           break;
       case 4:
           postorder(root);
           break;
          
       default:
          printf("wrong choice");
          break;
      
      }
    
    }
 
 
 }
 void insert(){
     create();
     if(root==NULL){
       root=temp;
     
     }else{
      search(root);
     
     }
     
 
 
 }
void create(){
int data;
printf("\n\t enter data to be inserted\n");
scanf("%d",&data);
temp=(struct btnode*)malloc(sizeof(struct btnode));
temp->value=data;
temp->lchild=NULL;
temp->rchild=NULL;

}
void search(struct btnode *t){
    if((temp->value>t->value) && (t->rchild!=NULL) ){
          search(t->rchild); }
    else if((temp->value>t->value)&&(t->rchild==NULL)){
            t->rchild=temp;}
    else if((temp->value<t->value) && (t->lchild!=NULL) ){
          search(t->lchild); }
    else if((temp->value<t->value)&&(t->lchild==NULL)){
            t->lchild=temp;}
            
    }

void inorder(struct  btnode *t){
  if(root==NULL){
     printf("\n\t bst is empty");
     return;
 
  }
  
  if(t->lchild!=NULL){
      inorder(t->lchild);}
  printf("%d ->",t->value);
  if(t->rchild!=NULL){
      inorder(t->rchild);}
    
  
  
  }


void preorder(struct  btnode *t){
  if(root==NULL){
     printf("\n\t bst is empty");
     return;
 
  }
  
  printf("%d ->",t->value); 
  
  if(t->lchild!=NULL){
      preorder(t->lchild);}
  if(t->rchild!=NULL){
      preorder(t->rchild);}
   
  
  
  }  
 


void postorder(struct  btnode *t){
  if(root==NULL){
     printf("\n\t bst is empty");
     return;
 
  }
  
  if(t->lchild!=NULL){
      postorder(t->lchild);}
  if(t->rchild!=NULL){
      postorder(t->rchild);}
  printf("%d ->",t->value);  
  
  
  }







