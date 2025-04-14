#ifndef LOCATION_H
#define LOCATION_H
#include <string>
using namespace std;
class Location {
private:
    string name;
    double latitude, longitude;
public:
    Location(string name, double lat, double lon);
    string getName() const;
    pair<double, double> getCoords() const;
};
#endif
