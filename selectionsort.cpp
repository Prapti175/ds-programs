#include<iostream>
using namespace std;
void selectionsort(int a[],int n);
int main()
{
    int a[20];int n;
    cout<<"how many elements?";
    cin>>n;
    cout<<"enter unsorted list";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"original unsorted list";
    for(int i=0;i<n;i++)
    cout<<"\t"<<a[i];
    selectionsort(a,n);
    cout<<"\n"<<"sorted list";
    for(int i=0;i<n;i++)
    cout<<"\t"<<a[i];
}
void selectionsort(int a[],int n)
{
    int minindex;
for(int i=0;i<n-1;i++)
{   
    int minindex=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[minindex])
        minindex=j;
        int temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
        
    }
}
}

/*PS D:\shraddha> cd "d:\shraddha\" ; if ($?) { g++ selectionsort.cpp -o selectionsort } ; if ($?) { .\selectionsort }
how many elements?5
enter unsorted list 5 7 8 6 1 
original unsorted list  5       7       8       6
sorted list     1       5       6       7       8
PS D:\shraddha> 
*/