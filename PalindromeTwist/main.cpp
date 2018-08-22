#include<iostream>

using namespace std;


/*
 * inputCopy
5
6
abccba
2
cf
4
adfa
8
abaazaba
2
ml
outputCopy
YES
NO
YES
NO
NO
Note
The first string of the example can be changed to "bcbbcb", two leftmost letters and two rightmost letters got changed to the next letters, two middle letters got changed to the previous letters.

The second string can be changed to "be", "bg", "de", "dg", but none of these resulting strings are palindromes.

The third string can be changed to "beeb" which is a palindrome.

The fifth string can be changed to "lk", "lm", "nk", "nm", but none of these resulting strings are palindromes. Also note that no letter can remain the same, so you can't obtain strings "ll" or "mm".*/



int check(int n,char s[])
{
    int i,j,k;
    for(i=0,j=n-1;i<=n/2-1,j>=n/2;i++,j--)
    {
        k=s[i]-s[j];
        if(k>2||k<-2||k==1||k==-1)
        return 0;
    }
    return 1;
}





int main()

{
    int test,n;
    char s[100];
    cin>>test;

    for(int i=0;i<test;i++)
    {
        cin>>n;
        cin>>s;
        if(check(n,s))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }

    return 0;

}