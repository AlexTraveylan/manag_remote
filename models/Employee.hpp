#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int employeeId;

public:
    Employee(string name, int employeeId);
    ~Employee();
};
