#include "Road.h"
Road::Road(Location* from ,Location* to ,double dist,bool isBlock=false):from(from),to(to),distance(dist),isBlocked(isBlock){}
double Road::getDist() const{
    return distance;
}