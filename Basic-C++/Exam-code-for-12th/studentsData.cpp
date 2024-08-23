#include <iostream>
#include <conio.h>
using namespace std;
// Student Class Declaration
class StudentClass
{
private: // Access-Spcifier
    // Member Variable Declaration
    char name[20];
    int regNo, sub1, sub2, sub3;
    float total, avg;

public: // Access-Specifier
    // Member Functions read() and print() Declaration
    void read()
    {
        // Get Input Values For Object Variables
        cout << "Enter Name :";
        cin >> name;
        cout << "Enter Registration Number :";
        cin >> regNo;
        cout << "Enter Marks for Subject 1,2 and 3 :";
        cin >> sub1 >> sub2 >> sub3;
    }
    void sum()
    {
        total = sub1 + sub2 + sub3;
        avg = total / 3;
    }
    void print()
    {
        // Show the Output
        cout << "Name :" << name << endl;
        cout << "Registraton Number :" << regNo << endl;
        cout << "Marks :" << sub1 << sub2 << sub3 << endl;
        cout << "Total :" << total << endl;
        cout << "Average :" << avg << endl;
    }
};
int main()
{
    // Object Creation For Class
    StudentClass stu1, stu2;
    cout << "Read and Print Student Information Class Example Program In C++\n";
    cout << "\nStudentClass : Student 1" << endl;
    stu1.read();
    stu1.sum();
    stu1.print();
    cout << "\nStudentClass : Student 2" << endl;
    stu2.read();
    stu2.sum();
    stu2.print();
    getch();
    return 0;
}