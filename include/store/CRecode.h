//
// Created by allen on 17/2/19.
//

#ifndef LITTLESQL_CRECODE_H
#define LITTLESQL_CRECODE_H

class CRecode {
public:
    CRecode();
    virtual ~CRecode();

    virtual const char* GetKey() = 0;
    virtual const char* GetData() = 0;

};

#endif //LITTLESQL_RECODE_H
