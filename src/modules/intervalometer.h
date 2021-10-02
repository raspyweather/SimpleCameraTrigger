#include "module.h"

class Intervalometer : public Module
{
    unsigned long delay = 5000;
    unsigned long trigger = 10000;
    unsigned long pause = 5000;
    bool repeat = true;
    char currentState = 0;

    unsigned long lastTime = 0;

public:
    void init();
    void loop();
    void start();
};

enum IntervalometerStates : char
{
    Stopped = 0,
    Delay = 1,
    Triggering = 2
};