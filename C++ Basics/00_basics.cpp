//this is single line comment 
/*Preprocessors in C++ are commands that run before actual compilation starts.
 They are handled by the preprocessor,which processes your code before it 
 goes to the compiler.*/

#include<iostream>// # is used to include pre-processor files 
//#define is used for defining Macros
//Pragma - to execute before main Function 
//" " - to include this local files 
//<> to include inbuilt files
// extern is used for just declaring variable without memory allocation
//There are two type of files :
//1st -header files:contains library function
//2nd -Library Files:contains declarations and defintion 
using namespace std;
/*Namespace is used to define the scope of program 
(std c++ means std version of namespace in c++)
:: - Scope Resolution operator

namespace is always global and never local , it includes all the function & method and avoid re - declaration of function

<<- Insertion Function
>> - Extraction Function
*/

int main(){
    cout<<"Hello world"<<endl;
}