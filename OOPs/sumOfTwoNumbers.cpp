#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int a, b, sum;

public:
    void input()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a;
        cout << endl;
        cin >> b;
    }
    void output()
    {
        sum = a + b;
        cout << "The sum of two numbers is: " << sum;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}