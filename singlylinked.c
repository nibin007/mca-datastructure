#include<stdio.h>
#include<stdlib.h>


void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{                      
        int value;
        struct node *next;
};
struct node *start=NULL;


int main()
{
    int choice;
    while (1) {
  
        printf("\n\t                MENU            \n");
                printf("\n\t 1.Create     \n");
                printf("\n\t 2.Display    \n");
                printf("\n\t 3.Insert at beginning   \n");
                 printf("\n\t 4.Insert at the end  \n");
                printf("\n\t 5.Insert at specified position       \n");
                printf("\n\t 6.Delete from beginning      \n");
                printf("\n\t 7.Delete from the end        \n");
                printf("\n\t 8.Delete from specified position     \n");
                printf("\n\t 9.Exit       \n");
                printf("\n\t--------------------------------------\n");
                
                
      
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
  
        switch (choice) {
        case 1:
            create();
            break;
       case 2:
               display();
               break;
       case 3:        
               insert_begin();
               break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}

  void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space: ");
                exit(0);
        }
        printf("\nEnter the data value for the node: ");
        scanf("%d",&temp->value);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty: ");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are: ");
                while(ptr!=NULL)
                {
                        printf("\n\t %d ",ptr->value );
                        ptr=ptr->next ;
                }
        }
}


void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space: ");
                return;
        }
        printf("\nEnter the data value for the node:" );
        scanf("%d",&temp->value);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}

void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space: ");
                return;
        }
        printf("\nEnter the data value for the node:" );
        scanf("%d",&temp->value);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}


void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:");
        scanf("%d",&temp->value) ;

        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found:[Handle with care] ");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}


void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty: ");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d",ptr->value);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d",ptr->value);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is:%d",ptr->value);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty:");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\nThe deleted element is:%d",ptr->value );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found:");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nThe deleted element is:%d",ptr->value );
                        free(ptr);
                }
        }
}
