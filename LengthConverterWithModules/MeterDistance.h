#pragma once
#include "Distance.h"

class MeterDistance : public Distance
{
public:
    MeterDistance(double distance);
    MeterDistance();

    explicit operator double() const override;
    explicit operator meter_t() const override;
    explicit operator foot_t() const override;
    explicit operator sm_t() const override;
};
