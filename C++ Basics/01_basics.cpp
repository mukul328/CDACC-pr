#include <iostream>
using namespace std;
//VARIABLE AND ITS TYPE-
/*
1-> Value Variable:These variable have the size of thier respective datatype and stores the values.
2-> Pointer Variable:These var stores the address and have the same size (8 bytes ) irrespective of data type,
3-> Reference Variable:Looks like a value var but works like a pointer var, creates alias

STORAGE TYPE -> DATATYPE->IDENTIFIER
    =>Auto         ->int          Var1;
                   ->float        Var2;
    =>Register                                Debricated after c++11
    =>Extern/Global
    =>Static
*/
int main(){

    int a  = 10; // value variable
    
    cout<<"The value of the variable stored :"<<a<<endl;//The value of the variable stored :10
    int *ptr;
    cout<<"The value of the ptr stored :"<<ptr<<endl;//The value of the ptr stored :0x7ffc2220eb18
    *ptr =a;
    cout<<"The value stored at the address stored by the ptr:"<<*ptr<<endl;//The value stored at the address stored by the ptr:10

    cout<<"The address of operator of the ptr:"<<&ptr<<endl;//The address of operator of the ptr:0x7ffc75cc78c0
    cout<<"The address of the a is : "<<&a<<endl;//The address of the a is : 0x7ffca608764c


}