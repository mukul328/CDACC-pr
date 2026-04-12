#include<iostream>
#include <cstring>
using namespace std;
//***********ABSTRACT DATA TYPE**************
/*
Abstract Data Type : User Defined Datatype
                        ->Non- primitive datatype

//whatever we can do with system defined datatype , we can do the same with user- defined datatypes

++++STRUCTURE+++++
In c++ you do not suppose to write struct keyword with every data type but we do require with C
also in c++ we can write function within in structure (Not possible in C)
*/

struct Student 
{
    string name;
    int rollnum;


    //Method 
    void print(){
        cout<<"The name of the student is: "<<name<<" "<<"Roll Number ->"<<rollnum<<endl;
    }
};

//Bit Padding : Compilers tries to always allocate the memory in multiple of 4 or 8.


/*
Union - Size of union is equivalent to the size of the largest member of the union 
Limitation of Union: values Get Overwritten and you get the last updated memory
Advantage : - Memory Optimization

*/

union Emp
{
    /* data */
    char[20] name;
    int ID;
    int Duration;

    void printDetail()
    { 
        cout<<"Enter the name of the employee: "<<endl;
        cin>>name;
        cout<<"The name of the employee: "<<name<<endl;
        cout<<"Enter the ID of the employee: "<<endl;
        cin>>ID;
        cout<<"The ID of the employee: "<<ID<<endl;

    }
};





int main(){
    Student a;
    a.name = "Mukul";
    a.rollnum =30;
    a.print();
    Student *ptr;
    ptr = &a;
    cout<<"The pointer is pointing: "<<ptr->name<<" "<<ptr->rollnum<<endl;
    ptr->print();

    Emp R;
    strcpy(R.name, "Mukul");
    cout << R.name;
    R.printDetail();
}