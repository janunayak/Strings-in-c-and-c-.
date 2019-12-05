#include<iostream>
using namespace std;
int main()
{
    int sum=0,sum1=0,max=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)  // time complexity O(n).
    {
        if(a[i]>0)
        {
            sum=sum+a[i];
        }
     sum1=sum1+a[i];
     if(sum1<0)
     {
         sum1=0;
     }
     if(sum1>max)
     {
         max=sum1;
     }
     
    }
    cout<<max<<" "<<sum<<endl; //subarray sum & non negative sum.
    return 0;

}
