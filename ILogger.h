#ifndef _ILOGGER_H_
#define _ILOGGER_H_

#include <string>
using namespace std;

//interface
class ILogger
{
    public:
        virtual void write(const string& msg) = 0;//Pure virtual function
};

#endif // _ILOGGER_H_
