#pragma once
#include "Libraries.h"

#define FOOT 3.28084

class MeterDistance;
class FootDistance;
class SantimeterDistance;

//typedef decltype(MeterDistance) meter_type; // Not work in C++ 14+
typedef MeterDistance meter_t;
typedef FootDistance foot_t;
typedef SantimeterDistance sm_t;