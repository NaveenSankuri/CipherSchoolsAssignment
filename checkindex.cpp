#include<iostream>
using namespace std;
int main()
{
    int arr[9],x,l;
    cout<<"a[9]={";
    for(int i=0;i<9;i++)
    {
       cin>>arr[i];
    }
    cout<<"}"<<endl;
    cout<<"Enter a number to check its first and last appereance in an array :";
    cin>>x;
    for(int i=0;i<9;i++){
        if(arr[i]==x)
        {
            l=i;
            break;
        }
         }
    cout<<"First Occurence :"<<l<<endl;
    for(int i=0;i<9;i++){
        if(arr[i]==x)
        {
            l=i;
        }
    }
    cout<<"Last Occurence  :"<<l;
}