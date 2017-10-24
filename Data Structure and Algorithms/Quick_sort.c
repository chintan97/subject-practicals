#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void quicksort(int [],int,int);
int main(){
  int x[100],size,i=0;
  char line[6];
  FILE *fp=fopen("test.txt","r");
  
  while(fgets(line,sizeof(line),fp)!=NULL)
  {
		x[i++]=atoi (line);
  }
  size=i;
  printf("\nYour elements:");
  for(i=0;i<size;i++)
		printf("\n %d",x[i]);

  quicksort(x,0,size-1);
 
  printf("\n\nSorted elements: ");
  for(i=0;i<size;i++)
    printf("\n %d",x[i]);

  return 0;
}

void quicksort(int x[],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
