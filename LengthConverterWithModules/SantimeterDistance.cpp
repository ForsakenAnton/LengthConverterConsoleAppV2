#include "SantimeterDistance.h"
#include "MeterDistance.h"
#include "FootDistance.h"

SantimeterDistance::SantimeterDistance(double distance) : Distance{ distance }
{ }

SantimeterDistance::SantimeterDistance() : SantimeterDistance{ 0.0 }
{ }

SantimeterDistance::operator double() const
{
    return distance;
}

SantimeterDistance::operator meter_t() const
{
    return MeterDistance{ distance / 100 };
}

SantimeterDistance::operator foot_t() const
{
    return FootDistance{ distance / 100 * FOOT };
}

SantimeterDistance::operator sm_t() const
{
    return distance;
}