#include "ICloudCommunicator.h"

class IOTCloudCommunicator:public ICloudCommunicator
{
    public:
        int pushMessage(string& message);
};
