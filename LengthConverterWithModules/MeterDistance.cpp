#include "MeterDistance.h"
#include "FootDistance.h" // fix "Incomplete type not allowed"
#include "SantimeterDistance.h" // fix "Incomplete type not allowed"

MeterDistance::MeterDistance(double distance) : Distance{ distance }
{ }

MeterDistance::MeterDistance() : MeterDistance{ 0.0 }
{ }

MeterDistance::operator double() const
{
    return distance;
}

MeterDistance::operator meter_t() const
{
    return distance;
}

MeterDistance::operator foot_t() const
{
    return FootDistance{ distance * FOOT }; //  fix "Incomplete type not allowed"
}

MeterDistance::operator sm_t() const
{
    return SantimeterDistance{ distance * 100 }; // fix "Incomplete type not allowed"
}