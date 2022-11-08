#include<stdio.h>
#include<stdlib.h>

int choice,i=0,arr[50],lim;
void main()
{

printf("\n enter the limit of the array");
scanf("%d",&lim);
printf("\n Add elements to the given array- \n");
for(i=0;i<lim;i++)
     {
        scanf("%d",&arr[i]);
     }
   menus();
 
}
void menus(){

  printf("\n");
        printf("\n\n Array Operations");
        printf("\n\t1. Insert");
        printf("\n\t2. display");
        printf("\n\t3. delete");
        printf("\n\t4. search");
        
        printf("\n\n\t Your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        
        case 1: insert();
        
            break;
        case 2:display();
           break;
       
        case 3:delete();
             break;
        case 4:search();
             break;
        };



}

void insert()
    {
        int location,element;
        printf("\n\n\tArray Insertion\n");
        printf("\n");
        printf("\n\n\tcurrent Array : ");
        
        for(i=0;i<lim;i++){
            printf("%d  ",arr[i]);};
        printf("\n\n\tEnter location : ");
        scanf("%d",&location);
       if(location+2>lim)
       {
       printf("overflow");
       
       }
       else {
        
        
        
        printf("\n\tEnter Element : ");
        scanf("%d", &element);
        for(i=lim;i>location-1;i--){
            arr[i]=arr[i-1];
            };
        arr[location-1]=element;
        printf("\n\n\tElement Inserted");
        printf("\n\n\tNew Array : ");
        lim++;
        for(i=0;i<lim;i++){
            printf("%d  ",arr[i]);
       };
        menus();
        };
    }

void display(){
 printf("\n the current array is ");
 for(i=0;i<lim;i++){
 
    printf("%d  ",arr[i]);
 }
 menus();


}
void delete(){
int i, location;
printf("\n enter the location to delete");
printf("\n");
scanf("%d",&location);
if(location>lim){
printf("overflow");
menus();
}
else{

for(i=location-1;i<lim-1;i++){
arr[i]=arr[i+1];


}
lim--;

for(i=0;i<lim;i++){
            printf("%d  ",arr[i]);
       };
        menus();



};


}
void search(){
int element,i,flag=0;
printf("\n enter the element to search");
printf("\n");

scanf("%d",&element);
for(i=0;i<lim;i++){
if(arr[i]==element){
printf("\n");
printf("elements found at %dth position",i+1);
flag=1;
break;


};



}
if(flag==0){
printf("element  not found");
};

menus();




}


