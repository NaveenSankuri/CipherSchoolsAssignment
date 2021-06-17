#include<iostream>
using namespace std;
int pow(int a,int b)
{
    int r=1;
    for(int i=1;i<=b;i++)
    r=r*a;
    return r;
}
int main()
{
    int a,n=0,sum=0,r;
    cout<<"enter a number to check whether it is amstrong number :";
    cin>>a;
    int temp=a;
    while(temp !=0){
        temp=temp/10;
        n++;
    }
    temp=a;
    while(temp !=0){
        r=temp%10;
        temp=temp/10;
        sum=sum+pow(r,n);
    }
    if(sum==a)
    cout<<"Yes "<<a<<" is an amstrong number ";
    else
    cout<<"No "<<a<<" is not an amstrong number ";
}