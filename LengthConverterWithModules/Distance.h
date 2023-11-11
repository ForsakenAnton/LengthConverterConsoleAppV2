#pragma once
#include "Shared.h"

class Distance abstract
{
protected:
    double distance;

public:
    Distance(double distance);
    Distance();

    friend ostream& operator << (ostream& out, const Distance& baseDistance);

    virtual explicit operator double() const = 0;
    virtual explicit operator meter_t() const = 0;
    virtual explicit operator foot_t() const = 0;
    virtual explicit operator sm_t() const = 0;
};


