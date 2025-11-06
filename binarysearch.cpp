#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x);
int main()
{
    int a[20];
    int x,n;
    cout<<"how many element";
    cin>>n;
    cout<<"enter"<<n<<"element";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to be searched";
    cin>>x;
    int p=binary_search(a,n,x);
    if(p==-1)cout<<"element not found";
    else cout<<"element found at location"<<p;
    return (0);
}
int binary_search(int a[], int n, int x)

{
    int first =0;
    int last =n-1;
    while(first <=last)
{
    int mid=(first+last)/2;
    if(a[mid]==x)return (mid);
    else if (a[mid]<x)first=mid+1;
    else last=mid-1;

}
return(-1);

}  



/*PS D:\shraddha> cd "d:\shraddha\" ; if ($?) { g++ binarysearch.cpp -o binarysearch } ; if ($?) { .\binarysearch }
how many element 5
enter5element 6 5 8 4 2 
enter element to be searched 2
element not found
PS D:\shraddha>*/ 
