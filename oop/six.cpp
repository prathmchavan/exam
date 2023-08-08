//Name - Vaibhav.P.Chaudhari
//Roll No - 39
//Batch - A2
#include<iostream>
using namespace std;

class matrix_2;
class matrix_1{
         private:
         int m,n;
         int a[100][100];
    public:
    void getm_1();
    void printm_1();

    friend void mathsum(matrix_1 &, matrix_2&);
};

void matrix_1::getm_1(){
    cout<<"Enter the rows and columns of matrix ";
    cin>>m>>n;
    cout<<"Enter the element of Matrix ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j];
        }
    }
}

void matrix_1::printm_1(){
    cout<<"Matrix_1 is:- "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

class matrix_2{
         private:
         int m,n;
         int b[100][100];
    public:
    void getm_2();
    void printm_2();

    friend void mathsum(matrix_1 &, matrix_2&);
};

void matrix_2::getm_2(){
    cout<<"Enter the rows and columns of matrix ";
    cin>>m>>n;
    cout<<"Enter the element of Matrix ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>b[i][j];
        }
    }
}

void matrix_2::printm_2(){
    cout<<"Matrix_2 is:- "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void mathsum(matrix_1 &x,matrix_2 &y){
    if(x.m==y.m && x.n==y.n){
        cout<<"The Sum of Matrix is "<<endl;
        for(int i=0;i<x.m;i++){
            for(int j=0;j<x.n;j++){
                cout<<x.a[i][j]+y.b[i][j]<<"\t";
            }
                cout<<endl;
        }
    }
}


int main(int argc, char const *argv[])
{
    matrix_1 m1;
    matrix_2 m2;

    m1.getm_1();
    m1.printm_1();

    m2.getm_2();
    m2.printm_2();

    mathsum(m1,m2);
    return 0;
}
/* Output
Enter the rows and columns of matrix 
3
3
Enter the element of Matrix 
2
3
4
5
6
7
8
9
1
Matrix_1 is:- 
2       3       4
5       6       7
8       9       1
Enter the rows and columns of matrix
3
3
Enter the element of Matrix 
8
7
6
5
4
3
7
2
1
Matrix_2 is:- 
8       7       6
5       4       3
7       2       1
The Sum of Matrix is
10      10      10
10      10      10
15      11      2
/*