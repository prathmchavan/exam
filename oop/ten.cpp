//Name - Vaibhav.P.Chaudhari
//Roll No - 39
//Batch - A2
#include<iostream>
using namespace std ;

template <class T>
class swap
{
     T temp ;
     T a ;
     T b;
     
public :
     void get (T x, T y) 
     {
          a=x;
          b=y;
     }
     void show ()
     {
         temp=a;
         a=b;
         b=temp;
         cout<<"\n A= "<<a ;
         cout<<"\n B= "<<b ;
     }
     
};

int main()
{
    double a,b ;
    ::swap <int> p ;
    
    cout<<"\n Enter integer value " ;
    cin>>a>>b;
    
    cout<<"\n Integers before swapping ";
    cout<<"\n A= "<<a ;
    cout<<"\n B= "<<b ;    
    p.get(a,b);
    
    cout<<"\n Integers after swapping ";               
    p.show();
    
    ::swap <float> q ;
    
    cout<<"\n Enter Float value " ;
    cin>>a>>b;
    
    cout<<"\n Float before swapping ";
    cout<<"\n A= "<<a ;
    cout<<"\n B= "<<b ;    
    q.get(a,b);
    
    cout<<"\n Float after swapping ";               
    q.show();
    
    
     
 }
 /* Output
  Enter integer value 5 2

 Integers before swapping 
 A= 5
 B= 2
 Integers after swapping 
 A= 2
 B= 5
 Enter Float value 3.9 9.3

 Float before swapping 
 A= 3.9
 B= 9.3
 Float after swapping 
 A= 9.3
 B= 3.9
 */
 
