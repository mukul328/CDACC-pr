#include<iostream>
using namespace std;

//***************FUNCTION************************
//A block of code to which performs a particular task
/*

Function are of 2 types:
    ->void
    ->DataType return
//Name Mangling : Process of giving encrypted name to the variables, 
functions and Structures and datatype which have the same name 
but takes different number and type of argyment so in order to differentiate
 btween these same name name mangling handles 
*/


//INLINE FUNCTION
/*
Inline function helps tp declare the function within a single line ( as the body is small ) using inline keyword
behinf the scene it request to the compiler to replace the function call with function body.

This saves the context switching time anf hence save excection time

//Difference between inline function and Macros 
-> Macros are instruction to the compiler but inline function is a request to the compiler 
-> Also the Macros are not type safe but inline is safe

*/

inline int addSum(int a , int b){
    return a+b;
}
int main(){
int result  = addSum(10,56);//66
cout<<result<<endl;

}