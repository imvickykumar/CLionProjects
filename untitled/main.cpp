#include <stdio.h>

int main()
{
    printf("hello world");

    int n;
    scanf("%d",&n);

    int i ;
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=n;i>0;i--){
        printf("%d",&arr[i]);
    }
}


