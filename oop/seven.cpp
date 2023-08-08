//Name - Vaibhav.P.Chaudhari
//Roll NO - 39
//Batch - A2
#include<iostream>
using namespace std; 
class Income
{
public:
char name[30];
int id;
void get()
{
cout<<"\n\n Enter Name:";
cin>>name; 
cout<<"\nEnter ID no.:";
cin>>id;
}
};
class Salary: public Income
{
public:
int hra,da,basic,gs;
void calsal()
{
cout<<"\n\nEnter Basic Salary:";
cin>>basic;
cout<<"\nEnter HRA:"; 
cin>>hra;
cout<<"\nEnter DA:";
cin>>da;
gs=basic+hra+da;
}
};
class Netsalary: public Salary
{
public:
int net, deduction;
void netsal()
{
cout<<"\n\nEnter amount of Deduction";
cin>>deduction;
net=gs-deduction;
}
void display()
{
cout<<endl<<endl;
cout<<"NAME:"<<name<<endl;
cout<<"ID NO:"<<id<<endl;
cout<<"-----------------------"<<endl;
cout<<"Basic Salary:"<<basic<<endl;
cout<<"HRA:"<<hra<<endl;
cout<<"DA:"<<da<<endl;
cout<<"------------------------"<<endl;
cout<<"Gross Salary:"<<gs<<endl;
cout<<"Net Salary:"<<net<<endl;
cout<<"-------------------------"<<endl;
}
};
int main()
{
Netsalary n1;
n1.get();
n1.calsal();
n1.netsal();
n1.display();
return 0;
}
/* Output

 Enter Name:Vaibhav

Enter ID no.:7584


Enter Basic Salary:40000

Enter HRA:12

Enter DA:4


Enter amount of Deduction2000


NAME:Vaibhav
ID NO:7584
-----------------------
Basic Salary:40000
HRA:12
DA:4
------------------------
Gross Salary:40016
Net Salary:38016
-------------------------
*/


