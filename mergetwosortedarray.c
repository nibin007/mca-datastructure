#include <stdio.h>
#include <stdlib.h>


void merge(int arr1[],int arr2[],int arr3[],int mergeSize,int size1,int size2);
void sort(int arr[],int l);
void menu();
int arr1[10],arr2[10],arr3[20],mergesize,mergeIndex,choice,lim1,i,ele,lim2;



void main(){


printf("\n enter the limit of first array \n");
scanf("%d",&lim1);

printf("\n enter the elements in firstarray \n");

for(i=0;i<lim1;i++)
{
scanf("%d",&ele);
arr1[i]=ele;
};


printf("\n enter the limit of second array \n");
scanf("%d",&lim2);
mergesize=lim1+lim2;

printf("\n enter the elements in secondarray \n");

for(i=0;i<lim2;i++)
{
scanf("%d",&ele);
 arr[i]=ele;
}; 
  



sort(arr1,lim1);



};

void sort(int arr[],int l)
{int i,temp,j;
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;

}

}


}
menu();

};

void merge(int arr1[],int arr2[],int arr3[],int mergeSize,int size1,int size2)
       { int index1=0,index2=0,i;
              for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {
        
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }


        if(arr1[index1] < arr2[index2])
        {
            arr3[mergeIndex]=arr1[index1];
            index1++;
        }
        else
        {
        arr3[mergeIndex] = arr2[index2];
            index2++;
        }
    }

    
    while(index1 < size1)
    {
    
    arr3[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
   arr3[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }
              
        printf("\nArray merged in ascending order : ");
    for(i=0; i<mergeSize; i++)
    {
        printf("%d\t",arr3[i]);
    }

      
              
              
              
              
          };           

void menu()
    {
        printf("\n");
  
        printf("\n\t1. sort");
        printf("\n\t2. merge");
        printf("\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: sort(arr2,lim2);
            break;
        case 2:
           merge(arr1,arr2,arr3,mergesize,lim1,lim2);
            break;
        case 6 :
            exit(1);
        }
    }





