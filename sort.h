#include <stdio.h>

int insertsort(int a[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
        {
            k=a[i];
            for(j=i-1;j>=0&&a[j]>k;j--)
            {
               a[j+1]=a[j];
            }
            a[j+1]=k;
        }
return 0;
}

int swap(int* x,int* y)
{
	int  tmp=*x;
	*x=*y;
	*y=tmp;
	return 0;
}

void quicksort(int*list,int m,int n)
{
if(m<n)
      {
	int i=m+1;
             int j=n;
             int key=list[m];
             while(i<=j)
            {
        	      while((i<=n)&&(list[i]<=key))
      		i++;
       	      while((j>=m+1)&&(list[j]>key))
             		j--;
        	      if(i<j)
                    {
            		 swap(&list[i],&list[j]);
        	        }
             }
           swap(&list[m],&list[j]);
           quicksort(list,m,j-1);
           quicksort(list,j+1,n);
    }
}

int print(int *a,int n)
{
      int i;
      for(i=0;i<n;i++)
      {
      	printf("%d       ",a[i]);
      }
      printf("\n");
      return 0;
}