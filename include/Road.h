#pragma once

#include "Location.h"
#include <string>
using namespace std;

class Road {
public:
    Location* from;
    Location* to;
    double distance;

public:
    Road(Location* from, Location* to, double distance);
    double getDist();
};