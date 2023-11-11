export module FootDistanceModule;

import DistanceModule;

export class FootDistance : public Distance
{
public:
    FootDistance(double distance);
    FootDistance();

    explicit operator double() const override;
    explicit operator meter_t() const override;
    explicit operator foot_t() const override;
    explicit operator sm_t() const override;
};
