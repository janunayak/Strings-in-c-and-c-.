#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int sum=0,sum1=0,max=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            sum=sum+a[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {

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
    if(max==0)
    {
        max=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
     cout<<max<<" "<<max<<endl;
    }
    else
    {
    cout<<max<<" "<<sum<<endl;
    }
    }
       return 0;
}
