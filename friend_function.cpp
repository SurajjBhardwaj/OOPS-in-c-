#include <iostream>
using namespace std;

class integer
{
private:
     int a, b;

public:
     friend int add(integer ad);
     /*
     this line is giving the access to a function which is
     defined outside the class to access the private data from this class...
     */
     integer(int x, int y)
     {
          this->a = x;
          this->b = y;
          cout << a << " " << b;
     }
};

int add(integer ad)
{

     return ad.a + ad.b;
}

int main()
{

     integer s(2, 4);
     cout << endl
          << "sum is : " << add(s) << endl;

     return 0;
}