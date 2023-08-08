
#include<iostream>
using namespace std;

class area_2D
{
    public:
    float r,b,h,ac,at;
    int l,w,s,ar,as;

    float area(float r)
    {
       ac=3.142857*r*r;
       cout<<"\n Area of circle="<<ac<<endl;
    }
    float area(float b, float h)
    {
       at=0.5*b*h;
       cout<<"\n Area of Triangle="<<at<<endl;
    }
    int area(int l,int w)
    {
        ar= l*w;
        cout<<"\n Area of Rectangle="<<ar<<endl;
    }
    int area(int s)
    {
        as=s*s;
        cout<<"\n Area of Square="<<as<<endl;
    }
};
 int main()
 {
    area_2D al;
    float r,b,h;
    int l,w,s;

    cout<<"\n Enter The Radius of Circle\t";cin>>r;al.area(r);
    cout<<"\n Enter The Base And height of Triangle\t";cin>>b>>h;al.area(b,h);
    cout<<"\n Enter The Length And Width of Rectangle\t";cin>>l>>w;al.area(l,w);
    cout<<"\n Enter The Side of Square\t";cin>>s;al.area(s);
    cout<<"\n";
 }
 /* Output
    Enter The Radius of Circle	7

 Area of circle=154

 Enter The Base And height of Triangle	10
2

 Area of Triangle=10

 Enter The Length And Width of Rectangle	25
12

 Area of Rectangle=300

 Enter The Side of Square	4

 Area of Square=16
*/


