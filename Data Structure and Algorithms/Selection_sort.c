#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int array[100],n,i=0,j,position,temp;
   char line[6];
   FILE *fp=fopen("test.txt","r");
   while(fgets(line,sizeof(line),fp)!=NULL)
   {
   		array[i++]=atoi (line);
   }
   n=i;
   printf("\nYour elements are:");
   for(i=0;i<n;i++)
   	  printf("\n%d",array[i]);
   	  
   for(i=0;i<(n-1);i++)
   {
      position=i;
      for(j=i+1;j<n;j++)
      {
         if(array[position]>array[j])
            position=j;
      }
      if (position!=i)
      {
         temp=array[i];
         array[i]=array[position];
         array[position]=temp;
      }
   }
   printf("\nSorted data is:");
   for (i=0;i<n;i++)
      printf("\n%d", array[i]);
   return 0;
}
