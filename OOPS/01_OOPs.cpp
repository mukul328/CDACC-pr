#include<iostream>
#include<string>
using namespace std;
/*
Structure-> Everything Inside a Structure is public by default, you dont have any option to change the access Modifier
Class-> Presence of Access Modifier.
By default the data members are private and Member Function are public
 +++++++Constructor++++++++++++
 -> Special member function gets automatically called when obj is created 
 -> Initialise the data - members 
 -> has no return type
 -> there are two type of constructors :
        -> Default 
        -> Parameterized Constructor 


//Singleton-> Singleton can be defined as the class of which only one object can be created 
                -> The constructor is private or Protected 
-> Steps in the creation of object 
    -> memory allocated 
    -> constructor is called 
    ->Memory Initialised 
*/


class Village{
public: 
string name;
int Female;
int lands;
int Male;
int Ponds;
// constructor

//default 
Village()
{  
    
    cout<<"Default Constructor Called: "<<endl;
    name="tarahathi";
    Female =10;
    Male =10;
    Ponds = 3;
    lands = 1500;
}

//parameterized
Village(string name ,int Ponds, int Male,int Female,int lands){
    cout<<"Parameterized one is  Constructor Called: "<<endl;
    this->name = name;
    this->Male = Male;
    this->Ponds = Ponds;
    this->Female = Female;
    this->lands = lands;
}
public:

 int Population(){
    int p = Male + Female;
    return p;
 }

 void displayArea(){
        cout<<"\n the area is: " <<lands*(Male + Female)<<endl;
 }

};

class District:public Village
{  public:
    void showDetail(){
        cout << "\nDistrict Population: " << Population();
        displayArea();
    }

};

int main (){
District d;
d.showDetail();
 Village b;
 b.displayArea();
}