export module SantimeterDistanceModule;

import DistanceModule;

export class SantimeterDistance : public Distance
{
public:
    SantimeterDistance(double distance);
    SantimeterDistance();

    explicit operator double() const override;
    explicit operator meter_t() const override;
    explicit operator foot_t() const override;
    explicit operator sm_t() const override;
};
