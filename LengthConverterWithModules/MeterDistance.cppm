import MeterDistanceModule;
import DistanceModule;

class FootDistance;
class SantimeterDistance;

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
    return FootDistance{ distance * FOOT };
}

MeterDistance::operator sm_t() const
{
    return SantimeterDistance{ distance * 100 };
}