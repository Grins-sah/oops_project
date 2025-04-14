#include "Graph.h"
Graph::Graph(){}
void Graph::addLocation(Location* X){
    graph[X]={};
}       
void Graph::addRoad(Road* R){
    Location* from = R->from;
    Location* to = R->to;
    graph[from].push_back({to,R});
    graph[to].push_back({from,R});
}
vector<pair<Location*,Road*>> Graph::getNeighbours(string x)  {
    for(auto ele : graph){
        if(ele.first->getName()==x) return ele.second;
    }
    return {}; // Return an empty vector if no match is found
}