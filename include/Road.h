#include<Location.h>
#include<iostream>
#include<string>
using namespace std;
class Road{
private:
    Location* from;
    Location* to;
    double distance;
    bool isBlocked;
public:
    Road(Location* from ,Location* to , double dist, bool isBlock);
    friend class Graph;
    double getDist() const;
};