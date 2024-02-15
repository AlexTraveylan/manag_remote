#include <iostream>
#include <string>

using namespace std;

class WorkInfo
{
private:
    int employeeId;
    bool isRemoteWork;
    string workDay;

public:
    WorkInfo(int employeeId, bool isRemoteWork, string workDay);
};