#include "Distance.h"

Distance::Distance(double distance) : distance{ distance }
{ }

Distance::Distance() : Distance{ 0.0 }
{ }

ostream& operator<<(ostream& out, const Distance& baseDistance)
{
    out << baseDistance.distance;

    return out;
}
