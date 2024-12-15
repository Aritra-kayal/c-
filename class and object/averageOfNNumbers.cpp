#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    float n, s, avg;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void output()
    {
        int i = 1;
        s = 0;
        while (i <= n)
        {
            s = s + i;
            i++;
        }
        float avg;
        avg = s / n;
        cout << "Average of n number is: ";
        cout << avg;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}