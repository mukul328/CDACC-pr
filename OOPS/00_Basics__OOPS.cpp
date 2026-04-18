#include <iostream>
#include<string.h>

using namespace std;
//************OOPS************** */
/* OOPs depicts the interaction of objects in the real world  entity 
class-> user defined datatype 
    ->Blueprint of a class
    ->Represent the state of the object and behaviour of the object 


    OOPs->
    ->Data Hiding: Hiding sensitive data using access Modifiers
    ->Absraction : Showing relevant data only and hiding the background details
    ->Encapsulation: Binding the data members and function together into a single entity.
    ->Polymorphism: . A single function name can work differently in different situations. Similarly, an operator works different when used in different context.





    -> Everything inside your class is private by default and hence you have to specify the access modifier
    -> In C++ you can create statuc objects which you cant in java
*/


class Bottles{
    public:
        double capacity;
        string color;
        string Material;
        int price;
        string brand;
    public:
        void setData(){
            cin.ignore();
            cin>>capacity;
            getline(cin,color);
            getline(cin,Material);
            //cin.ignore();
            cin>>price;
            getline(cin,brand);
        }

    public:
        void show(){
            cout<<capacity<<endl;
            cout<<Material<<endl;
            cout<<color<<endl;
            cout<<price<<endl;
            cout<<brand<<endl;
        }
    };
int main(){

    Bottles b;
    b.setData();
    b.show();

    

}