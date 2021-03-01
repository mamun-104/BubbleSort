#include<bits/stdc++.h>
using namespace std;

 void BubbleSort(int a[], int n)
 {
     int i,j,temp, c = 0;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             c++;
             if(a[j] > a[j+1])
             {
                 temp = a[j];
                 a[j] =a[j+1];
                 a[j+1]=temp;
             }

         }
     }
     printf("count = %d\n",c);

 }

int main()
{
    int a[] = {10, 5, 2, 8, 7, 55, 101, 9, 11, 59};
    int n,i;
    n = sizeof(a)/sizeof(a[0]);

    BubbleSort(a,n);

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }



    return 0;
}
