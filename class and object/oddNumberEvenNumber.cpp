#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void get()
    {
        if (n % 2 == 0)
            cout << "Even number";
        else
            cout << "Odd number";
    }
};
int main()
{
    A obj;
    obj.input();
    obj.get();
    getch();
}