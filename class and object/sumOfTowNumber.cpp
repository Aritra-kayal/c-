#include <iostream>
#include <conio.h>
using namespace std;
class add
{
private:
	int a, b, c;
public:
	void input()
	{
		cout << "enter first integer number:";
		cin >> a;
		cout << endl;
		cout << "enter second integer number:";
		cin >> b;
	}
	void sum()
	{
		c = a + b;
	}
	void show()
	{
		cout << "sum is:" << c;
	}
};
int main()
{
	add obj;
	obj.input();
	obj.sum();
	obj.show();
	getch();
}