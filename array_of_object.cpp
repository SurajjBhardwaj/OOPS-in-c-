#include <iostream>
using namespace std;


class Employee{
    string name;
    int salary;
    int priority;
    public:
    Employee(){

        cout<<"enter the name of the employee, salary of the employee and the priority of the employee"<<endl;
        cin>>name>>salary>>priority;
         
    }

    void getdata(){
        cout<<"\n";
        cout<<"employee name is : "<<name<<endl;
        cout<<"salary is : "<<salary<<endl;
        cout<<"position in company is : "<<priority<<endl;
    }


};
 
int main()
{
 
    // Employee one("suraj",10000,3);
    // one.getdata();
    
    //array of objects
    Employee Batch1[3];
    // for(int i=0;i<10;i++){
          
    //       cout<<"enter the data for "<<i<<"the employee"<<endl;
    //       Batch1[i].setdata();
     
    // }

    for(int i=0;i<3;i++){
        cout<<"the data of "<<i<<"th employee: "<<endl;
        Batch1[i].getdata();
    }
 
    return 0;
}