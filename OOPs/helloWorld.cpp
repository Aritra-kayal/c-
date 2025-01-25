#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
    void output()
    {
        cout << "Hello World!!";
    }
};
int main()
{
    A obj;
    obj.output();
    getch();
}