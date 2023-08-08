#include<iostream>
using namespace std;
class admission
{   private:
    
    int c,m,i,e,t;
    char ch;
    
    public:
    
    admission()
    {   c=0; m=0; i=0; e=0; t=0;   }
    
void operator ++()
{ 
    cout<<"\n Enter Code From Following:\n";
    cout<<"\n\n\t C For Computer\n\n\t M For Mechanical";
    cout<<"\n\n\t I For IT\n\n\t E For ENTC";
    cout<<"\n\n\t Enter the branch code="; cin>>ch;
    
    if(ch =='C'||ch =='c')
    {   c++;t++;    }
    
    else if(ch =='M'|| ch =='m')
    {   m++;t++;    }
    
    else if (ch =='I'|| ch =='i')
    {   i++;t++;   }
    
    else if(ch =='E'|| ch =='e')
    {    e++;t++;  }
}
    void display()
 {
    cout<<"\n Number of Admissions Taken:";
    cout<<"\n\n Computer\t"<<c;
    cout<<"\n\n Mechanical\t"<<m;
    cout<<"\n\n IT\t\t"<<i;
    cout<<"\n\n ENTC\t\t"<<e;
    cout<<"\n\n\n Total Admissions\t"<<t;
 }
  void operator--() // Declaration Of Operator '--' Function
  {
  cout<<"\n Enter Code From Following:\n";
  cout<<"\n\n\t C For Computer\n\n\t M For Mechanical";
  cout<<"\n\n\t I For IT\n\n\t E For ENTC";
  cout<<"\n\n\t Enter branch Code ="; cin>>ch; 
  
  if(ch =='C'|| ch=='c')
  {  c--;t--;   }
  
  else if(ch =='M'|| ch=='m')
  {  m--;t--;   }
  
  else if(ch =='I'|| ch=='i')
  {  i--;t--;   }
  
  else if(ch =='E'|| ch=='e')
  {   e--;t--;   }
}
};

int main()
{
    admission a; int i;
    
    do
  {
     cout<<"\n Enter Your Choice:";
     cout<<"\n\n 1\t Take Admission \n\n 2\t Cancel Admission \n\n 3\t Display Admiddion Count \n\n 4\t Exit Program";
     cout<<"\n\n\t Choice ="; cin>>i;
     
     switch(i)
     {
        case 1: ++a; break;
        case 2: --a; break;
        case 3: a.display(); break;
        case 4: break;
      }
  }    while(i<=4);
 }
 /*
   student@student-ZBOX-ECM73070C-53060C:~$ g++ oop4.cpp
student@student-ZBOX-ECM73070C-53060C:~$ ./a.out

 Enter Your Choice:

 1	 Take Admission 

 2	 Cancel Admission 

 3	 Display Admiddion Count 

 4	 Exit Program

	 Choice =1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Enter the branch code=C

 Enter Your Choice:

 1	 Take Admission 

 2	 Cancel Admission 

 3	 Display Admiddion Count 

 4	 Exit Program

	 Choice =1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Enter the branch code=M

 Enter Your Choice:

 1	 Take Admission 

 2	 Cancel Admission 

 3	 Display Admiddion Count 

 4	 Exit Program

	 Choice =1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Enter the branch code=I

 Enter Your Choice:

 1	 Take Admission 

 2	 Cancel Admission 

 3	 Display Admiddion Count 

 4	 Exit Program

	 Choice =1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Enter the branch code=E

 Enter Your Choice:

 1	 Take Admission 

 2	 Cancel Admission 

 3	 Display Admiddion Count 

 4	 Exit Program

	 Choice =2

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Enter branch Code =M

 Enter Your Choice:

 1	 Take Admission 

 2	 Cancel Admission 

 3	 Display Admiddion Count 

 4	 Exit Program

	 Choice =3

 Number of Admissions Taken:

 Computer	1

 Mechanical	0

 IT		1

 ENTC		1


 Total Admissions	3
 Enter Your Choice:
*/

    
