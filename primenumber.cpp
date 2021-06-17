#include<iostream>
using namespace std;
int main()
{
    int low,high,count;
    cout<<"Enter range to Print prime numbers between it "<<endl;
    cout<<"Low :";
    cin>>low;
    cout<<"High :";
    cin>>high;
    while(low<=high){
        count=0;
        for(int i=1;i<=low;i++)
        {
            if(low%i==0)
            count++;
        }
        if(count==2)
        cout<<low<<endl;
        low++;
    }
    return 0;
}