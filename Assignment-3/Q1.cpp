#include<bits/stdc++.h>
using namespace std;
void intersection(int nums1[],int nums2[],int a,int b)
{
    sort(nums1,nums1+a);
    sort(nums2,nums2+b);
    int i=0,j=0;
    while ( i< a && j<b) {
       if (nums1[i] < nums2[j])i++;
       else if (nums1[i] > nums2[j])j++;
       else{
          cout <<nums1[i] <<" ";
          i++;
          j++;
        }
    }
}
int main()
{
    int a,b;
    cout<<"enter two arrays to check two arrays intersection"<<endl;
    cout<<"no of elements in first array :";
    cin>>a;
    cout<<"no of elements in second array :";
    cin>>b;
    int *p=new int[a];
    int *p2=new int[b];
    for(int i=0;i<a;i++)
    cin>>p[i];
    for(int i=0;i<b;i++)
    cin>>p2[i];
    intersection(p,p2,a,b);
    return 0;
}