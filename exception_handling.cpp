#include <iostream>
using namespace std;
 
int main()
{
 
     int a,b,c;
     cout<<"enter two no"<<" ";
     cin>>a>>b;

    try
    {
        if(b==0){
            throw(b);
        }
        else{
            cout<<"your anser is : ";
             cout<<a/b;
        }
    }
    catch( int b)
    {
         cout<<"invalid b"<<endl;
    }
    
 
    return 0;
}