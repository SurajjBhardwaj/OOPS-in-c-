//template class 

#include<iostream>
using namespace std;

template<class T> class Arithematic
{
private: T a,T b

/* data */

Arithematic( T a,T b)
{

this->a=a;
this->b=b;

}
T add();
T substract();
}


T Arithematic <T> :: add(){

T c;
c=a+b;

return c;

}

int main(){

Arithematic <int> arr(11,15);
cout<<"the sum is "<<arr.add()<<endl;


}