#include <iostream>
using namespace std;



class school{

     public:
      void print(){
        cout<<"print of base class is working"<<endl;
     }

    virtual void show(){
        cout<<"show of base class is working"<<endl;
     }





};
//created a virtual class
// virtual class is a class which is inherited from a base class,virtual class is a unique type of class...

/*
let's assume we are creating a class with the inheritence of two base classes which are inherited from another class called
grand parrent class...

now in our class two child of grand parrent is inheriting so that we have two coppy of members of grand parrent class
in our class...to not to face this type of situation we use virtual classes...

which will inherit their class member for only one time...


*/

//first virtual class inherited from school base class
class student : virtual public school{

    public:
    //   void print(){
    //     cout<<"print of derived class is working "<<endl;
    // }

    // void show(){
    //     cout<<"show of derived class is working"<<endl;
    // }


};


//second vitual class from school base class
class teacher : virtual public school{
    
    // public:

    // void show(){
    //     cout<<"print of teacher class is working "<<endl;
    // }


};


//new class which is inherited from first and second virtual class
class suraj :public student, public teacher {
    public:

    void show(){
        cout<<"function in suraj is working"<<endl;
    }

};
 
int main()
{
 
    // school *s;
    // student p;
    // s=&p;
      
    // s->print();
    // s->show(); 
    
    suraj s;
    s.print();
    s.show();

    return 0;
}