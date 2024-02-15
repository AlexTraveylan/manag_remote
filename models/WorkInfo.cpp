#include "WorkInfo.hpp"

WorkInfo::WorkInfo(int employeeId, bool isRemoteWork, string workDay)
{
    this->employeeId = employeeId;
    this->isRemoteWork = isRemoteWork;
    this->workDay = workDay;
}