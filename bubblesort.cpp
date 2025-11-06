#include<iostream>
using namespace std;
void bubblesort(int a[],int n);
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
    bubblesort(a,n);
    cout<<"\n"<<"sorted list";
    for(int i=0;i<n;i++)
    cout<<"\t"<<a[i];
}
void bubblesort(int a[],int n)
{
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
    }
}
} 


/*PS D:\shraddha> cd "d:\shraddha\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
how many elements? 5
enter unsorted list 8 7 4 6 2 
original unsorted list  8       7       4       6       2
sorted list     2       4       6       7       8
PS D:\shraddha> 

*/