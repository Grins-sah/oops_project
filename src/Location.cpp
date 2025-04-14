#include "Location.h"
Location::Location(string name, double lat, double lon) 
    : name(name), latitude(lat), longitude(lon) {}
string Location::getName() const{
    return name;
}
pair<double,double> Location::getCoords() const{
    return {latitude,longitude};
}