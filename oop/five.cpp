#include<iostream>
using namespace std;
class fact
{
 int n;
 public:
 fact(int a)
 {
 n=a;
 }
 fact(fact &b)
 {
  int f=1;
  n=b.n;
  for(int i=1;i<=b.n;i++)
  f=f*i;
  cout<<"\n factorial=\n"<<f;
  }
};
main()
{
 int a;
 cout<<"\n Enter the number=";
 cin>>a;
 fact p(a);
 fact q(p);
}
/*Output

 Enter the number=4

 factorial=
24
*/
