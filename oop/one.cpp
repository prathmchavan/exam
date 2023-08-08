#include<iostream>
using namespace std;
class arithmatic
{
private:
int num1, num2;
public:
void getData()
{
cout<<"Enter Number 1:\t";
cin>>num1;
cout<<"Enter Number 2:\t";
cin>>num2;
}
void addition()
{
cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
}
void subtraction()
{
cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
}
void multiplication()
{
cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
}
void division()
{
cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
}
};
int main()
{ arithmatic obj1;
obj1.getData();
obj1.addition();
obj1.subtraction();
obj1.multiplication();
obj1.division();
return 0;
}
/* OUTPUT:
student@student-ZBOX-ECM73070C-53060C:~$ g++ ARITH_OPT.cpp
student@student-ZBOX-ECM73070C-53060C:~$ ./a.out
Enter Number 1: 3
Enter Number 2: 4
3 + 4 = 7
3 - 4 = -1
3 * 4 = 12
3 / 4 = 0 */

