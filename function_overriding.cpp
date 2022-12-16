#include <iostream>
using namespace std;

class A{
   
     public:
     void show(){
        cout<<"name is : "<<endl;
    }


};

class B : public A{

    public:
   void show(){
        cout<<"idk who is working"<<endl;
    }
};


 
int main()
{   
    A s;         
    B t;
    t.show();
    s.show();
     
    return 0;
}