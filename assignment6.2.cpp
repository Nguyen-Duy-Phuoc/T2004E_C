#include <stdio.h>
float  a[i];
int n;
{
   float min;
   int dem= 0;
   for (int i=0; i<n; i++)
   {
       if(a[i]>0)
       {
           dem ++;
           break;
       }
   }
   if (dem !=0)
   {
       min = a[i];
       for (i=i+1; i<n; i++)
       {
           if((a[i]>0)&&(min>a[i]))
           {
               min = a[i];
           }
       }
       return min;
   }
   return -1;
}
