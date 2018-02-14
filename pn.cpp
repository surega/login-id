#include <iostream>

using namespace std;
class A
{
    public:
    void display(int n)
    {
        if(n<0)
        cout<<"negative";
        else
        cout<<"positive";
    }
};

int main()
{
    A a;
    a.display(-2);
    return 0;
}



