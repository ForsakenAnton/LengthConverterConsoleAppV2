#include "FootDistance.h"
#include "MeterDistance.h"
#include "SantimeterDistance.h"

FootDistance::FootDistance(double distance) : Distance{ distance }
{ }

FootDistance::FootDistance() : FootDistance{ 0.0 }
{ }

FootDistance::operator double() const
{
    return distance;
}

FootDistance::operator meter_t() const
{
    return MeterDistance{ distance / FOOT };
}

FootDistance::operator foot_t() const
{
    return distance;
}

FootDistance::operator sm_t() const
{
    return SantimeterDistance{ distance / FOOT * 100 };
}