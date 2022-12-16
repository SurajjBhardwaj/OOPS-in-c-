#include <iostream>
using namespace std;

// forward decleration
class number;

class calc
{

public:
    calc()
    {
        cout << "you can perfor add only right now " << endl;
    }
    int add(number a1, number a2);
};

class number
{
private:
    int a;
    // friend int calc :: add(number a1,number a2);- will make a friend function add of calc class of number class
    /* data */
    friend class calc; // this willl make the whole calc class friend of number
public:
    number(int x) { this->a = x; };
};

int calc::add(number a1, number a2)
{
    return a1.a + a2.a;
}

int main()
{
    number a1(66), a2(78);
    calc c;

    cout << "the sum is : " << c.add(a1, a2);

    return 0;
}