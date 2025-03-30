#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printArray(arr,n);
    return 0;
}