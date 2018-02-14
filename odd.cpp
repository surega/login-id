#include <iostream>

using namespace std;
class A
{
    public:
    void display(int n)
    {
        if(n%2==0)
        cout<<"even";
        else
        cout<<"odd";
    }
};

int main()
{
    A a;
    a.display(4);
    return 0;
}



