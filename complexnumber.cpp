#include<iostream>
using namespace std;
class complex 
{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r,float i)
{
    real=r;
    imag=i;
   
}
~complex()
{
}
complex operator+(complex c)
{
    float r=real+c.real;
    float i=imag+c.imag;
    return(complex(r,i));
}
complex operator-(complex c)
{
    float r=real-c.real;
    float i=imag-c.imag;
    return(complex(r,i));
}
complex operator*(complex c)
{
    float r=real*c.real-imag*c.imag;
    float i=real*c.imag+imag*c.real;
    return(complex(r,i));
}
void display(void)
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
};
int main()
{
    complex c1(8,5),c2(4,2);
    cout<<"1st number";
    c1.display();
    cout<<"2nd number";
    c2.display();
    complex sum=c1+c2;
    cout<<"sum";
    sum.display();
    complex diff=c1-c2;
    cout<<"diff is";
    diff.display();
    complex prod=c1*c2;
    cout<<"product is";
    prod.display();
    return(0);

}

/*element not found
PS D:\shraddha> cd "d:\shraddha\" ; if ($?) { g++ complex.cpp -o complex } ; if ($?) { .\complex }
1st number8+5i
2nd number4+2i
sum12+7i
diff is4+3i
product is22+36i
PS D:\shraddha> 
*/






