#include<iostream>
using namespace std;
class Student
{
protected:
char name[50];
int prn;
public:
void id()
{
cout<<"\n\n Enter Your Name:\n\t "; 
cin>>name;
cout<<"\n\n Enter Your PRN (id no.) :\t";
cin>>prn;
}
};
class Sub_marks: public Student
{
protected:
int aec,m3,dm,ss,ob,oop;
public:
void sub_mark() 
{
cout<<"\n\n Enter Your Subject Marks :\n"; 
cout<<"\n A.E.C.="; cin>>aec; 
cout<<"\n M-III =";cin>>m3; 
cout<<"\n D.M.="; cin>>dm;
cout<<"\n S.S.=";cin>>ss;
cout<<"\n O.B. ="; cin>>ob; 
cout<<"\n O.O.P.="; cin>>oop;
}
};
class Sports_marks
{
protected: 
int sp;
public:
void sport()
{
cout<<"\n\n Enter Your Sports Marks :\t";
cin>>sp;
}
};
class T_marks: public Sub_marks, public Sports_marks
{
protected:
float tm,tp;
public:
void tmarks()
{
tm = aec +m3 +dm +ss +ob +oop +sp;
}
void tpcent()
{
tp-tm/6.5;
}
void display()
{
cout<<"\n\n Name:"<<name;
cout<<"\n PRN:"<<prn;
cout<<"\n\n Your Subject Marks :\n";
cout<<"\n A.E.C.="<<aec;
cout<<"\n M-III ="<<m3;
cout<<"\n D.M.="<<dm;
cout<<"\n S.S.="<<ss; 
cout<<"\n O.B.="<<ob; 
cout<<"\n O.O.P.="<<oop; 
cout<<"\n\n Your Sports Marks :"<<sp;
cout<<"\n Your Total Marks =\t"<<tm<<"/650"; 
cout<<"\n Your Total Percent =\t"<<tp;
}
};
int main()
{
T_marks S1;
S1.id();
S1.sub_mark(); 
S1.sport();
S1.tmarks();
S1.tpcent();
S1.display();
return 0;
}
/* Output
 Enter Your Name:
	 Vaibhav


 Enter Your PRN (id no.) :	2021


 Enter Your Subject Marks :

 A.E.C.=40 

 M-III =40

 D.M.=40

 S.S.=39

 O.B. =39

 O.O.P.=40


 Enter Your Sports Marks :	5


 Name:Vaibhav
 PRN:2021

 Your Subject Marks :

 A.E.C.=40
 M-III =40
 D.M.=40
 S.S.=39
 O.B.=39
 O.O.P.=40

 Your Sports Marks :5
 Your Total Marks =	243/650
 Your Total Percent =	2378.08
 */
