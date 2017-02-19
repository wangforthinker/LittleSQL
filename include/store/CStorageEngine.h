//
// Created by allen on 17/2/19.
//

#ifndef LITTLESQL_CSTORAGEENGINE_H
#define LITTLESQL_CSTORAGEENGINE_H

#include "include/CStatus.h"
#include "CRecode.h"

//storage engine interface, read data from storage
class CStorageEngine {

public:
    CStorageEngine();
    virtual ~CStorageEngine();

    //define base storage recode ops: write read
    virtual CStatus WriteOneRecode(CRecode* recode);

};



#endif //LITTLESQL_STORAGEENGINE_H
