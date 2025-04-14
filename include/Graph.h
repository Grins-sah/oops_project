#include<string>
#include<unordered_map>
#include<Location.h>
#include<vector>
#include<Road.h>
using namespace std;
class Graph{
private:
    unordered_map<Location*,vector<pair<Location*,Road*>>> graph;
public:
    Graph();
    void addLocation(Location* X);
    void addRoad(Road* R);
    vector<pair<Location*,Road*>> getNeighbours(string X);
};