#ifndef _ICLOUDCOMMUNICATION_H_
#define _ICLOUDCOMMUNICATION_H_

#include <string>
using namespace std;

class ICloudCommunicator
{
  public:
    virtual int pushMessage(string& message) = 0;
};

#endif // _ICLOUDCOMMUNICATION_H_
