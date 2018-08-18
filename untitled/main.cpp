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

    for(i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }


    /*
     * #include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,b,c;


   scanf("%u",&a);
   scanf("%u",&b);
   c=a+b;
   printf("The value c is %u\n", c);

   _getch();
   return 0;
}
Edit & Run

     */
}


