//
// Created by allen on 17/2/19.
//

#ifndef LITTLESQL_CSTATUS_H
#define LITTLESQL_CSTATUS_H

#include <iostream>

class CStatus {
public:
    CStatus(long retCode, long errCode, const char* errMsg);
    CStatus(long retCode, long errCode, std::string errMsg);
    ~CStatus();

    long    RetCode();
    long    ErrCode();
    std::string ErrMsg();

private:
    long    retCode;
    long    errCode;
    std::string errMsg;
};


#endif //LITTLESQL_CSTATUS_H
