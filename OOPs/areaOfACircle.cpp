#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    float r, area;

public:
    void input()
    {
        cout << "Enter the value of radius: ";
        cin >> r;
    }
    void output()
    {
        area = 3.14 * r * r;
        cout << "The area of a circle: " << area;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}