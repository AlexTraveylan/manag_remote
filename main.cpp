#include <iostream>
#include <string>
#include "models/Employee.hpp"
#include "models/WorkInfo.hpp"
#include <vector>

using namespace std;

int main()
{
    vector<Employee> employees;
    vector<WorkInfo> workInfos;

    Employee employee1("John", 1);
    Employee employee2("Jane", 2);
    Employee employee3("Jim", 3);

    employees.push_back(employee1);
    employees.push_back(employee2);
    employees.push_back(employee3);
}