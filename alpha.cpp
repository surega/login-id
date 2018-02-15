#include <iostream>

using namespace std;

int main() {
	char ch;
	cout<<"ch=";
	cin>>ch;
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	cout<<"alphabet";
	else
	cout<<"not alphabet";
}
