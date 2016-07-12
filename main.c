#include "sort.h"

int main(int argc, char** argv) 
{
    int i,n=8;
    int a[]={3,19,7,4,8,10,1,5};
    insertsort(a,n);
    print(a,n);
    quicksort(a,0,n-1);
    print(a,n);
    return 0;
}



