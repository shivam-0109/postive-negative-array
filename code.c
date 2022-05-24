#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("Postive number in the array :");
    for(int i=0;i<n;i++){
        if(arr[i]>0)
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    printf("Negative number in the array :");
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        printf("%d ",arr[i]);
    }

    return 0;
}
