//class of 14th nov
#include<iostream>
using namespace std;


class Calender
{
    public:
    int date;
    
    void output();
    Calender(int x)
     {
       cout<<"Calender is running "<<endl;
       this->date=x;
       this->date++;
       this->output();
       cout<<"the value of object is "<<date<<" "<<endl;
     }
     
};

 void Calender :: output()
     {
         cout<<"output is running "<<endl;
        // this->date=6;
     }

int main(){

   Calender suraj=Calender(7);

    return 0;
}
