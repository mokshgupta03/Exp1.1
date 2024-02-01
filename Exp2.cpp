#include<iostream>
using namespace std;
void  main()
{
    int i,arr[10],n,element,lb=0,ub,mid;
cout<<"Enter the no of elements you want in array"<<endl;
cin>>n;
cout<<"Enter elements in the array "<<endl;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"The array is "<<endl;
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<"Enter the element you want to search in array "<<endl;
cin>>element;
ub=n-1;
while(lb<=ub)
{
    mid=(lb+ub)/2;
    if(element==arr[mid])
    {
        cout<<"Term Found"<<endl;
    }
    else if(element<arr[mid])
    {
        ub=mid-1;
    }
    else
    {
        lb=mid+1;
    }
    
}
   
}
