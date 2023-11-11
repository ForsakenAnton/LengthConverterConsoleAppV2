
#include "Distance.h"
#include "MeterDistance.h"
#include "FootDistance.h"
#include "SantimeterDistance.h"


int main()
{
    // Завдання 3
    // Створіть клас, який представляє відстань у метрах.
    // Перевантажте оператор приведення типу, 
    // щоб можна було отримати відстань у футах або сантиметрах.

    // init example
    meter_t metersWithDefaultCtor;
    metersWithDefaultCtor = 50;

    meter_t meters = 100;


    // cout example
    cout << metersWithDefaultCtor << endl;
    cout << meters << endl << endl;

    // explisit conversion from meters to foots and santimeters
    foot_t foots;
    foots = (foot_t)meters;
    cout << foots << endl;

    sm_t santimeters = (sm_t)meters;
    cout << santimeters << endl << endl;

    // inline conversion
    //cout << (int)meters << endl; no explicit operator conversion
    cout << (double)meters << endl;
    cout << (meter_t)meters << endl;
    cout << (foot_t)meters << endl;
    cout << (sm_t)meters << endl;
    cout << meters << endl << endl; //object was not changed

    // convert meters, foots and sm to double
    double m = (double)meters;
    double f = (double)foots;
    double s = (double)santimeters;
    cout << m << endl;
    cout << f << endl;
    cout << s << endl << endl;

    // conversion from foots and sm to meters
    foots = 1000;
    santimeters = 1000;

    meters = (meter_t)foots;
    cout << foots << endl;
    meters = (meter_t)santimeters;
    cout << meters << endl << endl;

    // inline conversion
    meters = 1000;
    foots = 1000;
    santimeters = 1000;

    cout << (meter_t)meters << endl;
    cout << (foot_t)meters << endl;
    cout << (sm_t)meters << endl << endl;

    cout << (meter_t)foots << endl;
    cout << (foot_t)foots << endl;
    cout << (sm_t)foots << endl << endl;

    cout << (meter_t)santimeters << endl;
    cout << (foot_t)santimeters << endl;
    cout << (sm_t)santimeters << endl << endl;




    // experiments ////////////////////////////////////////////
    // all in comments are not working

    meters = (meter_t)meters;
    //meters = (foot_t)meters;
    //meters = (sm_t)meters;

    meters = (meter_t)foots;
    //meters = (foot_t)foots;
    //meters = (sm_t)foots;

    meters = (meter_t)santimeters;
    //meters = (foot_t)santimeters;
    //meters = (sm_t)santimeters;
    // //////////////////////////////

    //foots = (meter_t)meters;
    foots = (foot_t)meters;
    //foots = (sm_t)meters;

    //foots = (meter_t)foots;
    foots = (foot_t)foots;
    //foots = (sm_t)foots;

    //foots = (meter_t)santimeters;
    foots = (foot_t)santimeters;
    //foots = (sm_t)santimeters;
    /////////////////////////////////

    //santimeters = (meter_t)meters;
    //santimeters = (foot_t)meters;
    santimeters = (sm_t)meters;

    //santimeters = (meter_t)foots;
    //santimeters = (foot_t)foots;
    santimeters = (sm_t)foots;

    //santimeters = (meter_t)santimeters;
    //santimeters = (foot_t)santimeters;
    santimeters = (sm_t)santimeters;
    // ////////////////////////////////////////////////////////////////
}