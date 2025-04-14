#include "Road.h"
Road::Road(Location* from, Location* to, double dist) : from(from), to(to), distance(dist) {
}
double Road::getDist() {
    return distance;
}