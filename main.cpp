#include "Graph.h"
#include "BFSRoute.h"
#include "Location.h"
#include "Road.h"
#include <iostream>
using namespace std;

void testBFS() {
    // Create locations
    Location* locA = new Location("A", 12.5, 77.2);
    Location* locB = new Location("B", 12.6, 77.3);
    Location* locC = new Location("C", 12.7, 77.4);
    Location* locD = new Location("D", 12.8, 77.5);
    Location* locE = new Location("E", 12.9, 77.6);
    Location* locF = new Location("F", 13.0, 77.7);

    // Create graph and add locations
    Graph* graph = new Graph();
    graph->addLocation(locA);
    graph->addLocation(locB);
    graph->addLocation(locC);
    graph->addLocation(locD);
    graph->addLocation(locE);
    graph->addLocation(locF);

    // Create roads and add them to the graph
    Road* roadAB = new Road(locA, locB, 5.0);
    Road* roadBC = new Road(locB, locC, 3.0);
    Road* roadCD = new Road(locC, locD, 2.0);
    Road* roadDE = new Road(locD, locE, 4.0);
    Road* roadEF = new Road(locE, locF, 6.0);
    Road* roadAC = new Road(locA, locC, 7.0);
    Road* roadBD = new Road(locB, locD, 8.0);

    graph->addRoad(roadAB);
    graph->addRoad(roadBC);
    graph->addRoad(roadCD);
    graph->addRoad(roadDE);
    graph->addRoad(roadEF);
    graph->addRoad(roadAC);
    graph->addRoad(roadBD);

    // Use BFSRoute to find the shortest path
    BFSRoute bfs;

    // Test 1: Path from A to F
    vector<Road*> path1 = bfs.findRoute(graph, locA, locF);
    cout << "BFS Path from A to F:" << endl;
    for (Road* road : path1) {
        cout << road->from->getName() << " -> " << road->to->getName() << " (Distance: " << road->getDist() << ")" << endl;
    }

    // Test 2: Path from B to E
    vector<Road*> path2 = bfs.findRoute(graph, locB, locE);
    cout << "\nBFS Path from B to E:" << endl;
    for (Road* road : path2) {
        cout << road->from->getName() << " -> " << road->to->getName() << " (Distance: " << road->getDist() << ")" << endl;
    }

    // Test 3: Path from C to D
    vector<Road*> path3 = bfs.findRoute(graph, locC, locD);
    cout << "\nBFS Path from C to D:" << endl;
    for (Road* road : path3) {
        cout << road->from->getName() << " -> " << road->to->getName() << " (Distance: " << road->getDist() << ")" << endl;
    }

    // Clean up
    delete locA;
    delete locB;
    delete locC;
    delete locD;
    delete locE;
    delete locF;
    delete graph;
    delete roadAB;
    delete roadBC;
    delete roadCD;
    delete roadDE;
    delete roadEF;
    delete roadAC;
    delete roadBD;
}

int main(){
    cout<<"hello"<<endl;
    testBFS();
}