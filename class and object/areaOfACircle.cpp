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
        cout << "Enter the radius of circle: ";
        cin >> r;
    }
    void output()
    {
        area = 3.14 * r * r;
        cout << "Area of the circle is: " << area;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}