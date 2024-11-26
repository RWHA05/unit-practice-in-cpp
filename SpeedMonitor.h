#include "ILogger.h"
#include "ISpeedSensor.h"
#include "ICloudCommunicator.h"

class SpeedMonitor
{
    private : 
        int _speedThreshold;
        //Dependency
        ILogger *_logger;
        ISpeedSensor *_speedSensorInstance;
        ICloudCommunicator *_cloudCommunicatorInstance;
  
    public:
        SpeedMonitor(int speedThreshold,ILogger *logger,ISpeedSensor *speedSensorInstance,ICloudCommunicator *cloudCommunicatorInstance);
        void monitor();
};
