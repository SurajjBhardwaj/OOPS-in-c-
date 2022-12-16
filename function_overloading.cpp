#include <iostream>
using namespace std;
 
class Number {
    
     int first;
     int second;
    
    public:
     void setdata(int x , int y) {
       first=x;
       second=y;
     }

     int sum(){

        return first+second;

     }
//this is fumction overloading :-
//declered two functions with the same name but different arguments;
     int sum(Number a,Number b){

        return (a.first+b.first)-(a.second+b.second);

     }

     void display(){
        cout<<"the no are : "<<first<<" "<<second<<endl;
     }

     //operator overloading:-
     Number operator + (Number a){
        Number c;
        c.first=a.second*a.first;
        c.second=a.second/a.second;
        return c;
     }

     void operator -(){
       first=-first;
       second=-second;
     }



};



int main()
{
 
    //  Number a,b;
    //  cout<<"sum is: "<<a.sum(a)<<endl;
    //  cout<<"sum is: "<<b.sum(b)<<endl;


    //  a.display(a);

    //  cout<<"sum is : "<<a.sum(a,b);

     //operaror overloading begin

    //  Number c(5,4),d(7,8),e(0,0);
    // c.display();
    Number c,d,e;
    c.setdata(4,5);
    d.setdata(5,6);
    e.setdata(0,0);

    -c;
    
    c.display();

    // e.display();
    // cout<<c.sum();

    // e=c+d;
    // e.display();



   
    return 0;
}