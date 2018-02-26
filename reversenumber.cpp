#include <iostream>
using namespace std;

int main()
{
    int n, reverseNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        reverseNum = reverseNum*10 + remainder;
        n /= 10;
    }

    cout << "Reverse Num= " << reverseNum;

    return 0;
}
