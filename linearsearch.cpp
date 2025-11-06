#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x);
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
    int p=linear_search(a,n,x);
    if(p==-1)cout<<"element not found";
    else cout<<"element found at location"<<p;
    return (0);
}
int linear_search(int a[],int n,int x)
{
for(int i=0;i<n;i++)
{
    if(a[i]==x)
    return(i);

}
return(-1);
}


/*PS D:\shraddha> cd "d:\shraddha\" ; if ($?) { g++ linearsearch.cpp -o linearsearch } ; if ($?) { .\linearsearch }
how many element 5
enter5element 2 6 4 7 8 
enter element to be searched 4
element found at location2
PS D:\shraddha> 
*/