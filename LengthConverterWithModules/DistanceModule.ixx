export module DistanceModule;

import <iostream>;
//using namespace std;

#define FOOT 3.28084

class MeterDistance;
class FootDistance;
class SantimeterDistance;

export typedef MeterDistance meter_t;
export typedef FootDistance foot_t;
export typedef SantimeterDistance sm_t;

export class Distance abstract
{
protected:
    double distance;

public:
    Distance(double distance);
    Distance();

    friend std::ostream& operator << (std::ostream& out, const Distance& baseDistance);

    virtual explicit operator double() const = 0;
    virtual explicit operator meter_t() const = 0;
    virtual explicit operator foot_t() const = 0;
    virtual explicit operator sm_t() const = 0;
};