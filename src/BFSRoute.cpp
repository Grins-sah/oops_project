#include "BFSRoute.h"

vector<Road*> BFSRoute::findRoute(Graph* g, Location* from, Location* to) {
    unordered_set<Location*> visited; 
    queue<Location*> q;
    unordered_map<Location*, Road*> parent;
    q.push(from);

    while (!q.empty()) {
        Location* current = q.front();
        q.pop();

        if (visited.count(current)) continue;
        visited.insert(current);

        for (auto& neighbor : g->getNeighbours(current->getName())) {
            Location* nextLocation = neighbor.first;
            Road* road = neighbor.second;

            if (!visited.count(nextLocation)) {
                parent[nextLocation] = road;
                q.push(nextLocation);

                if (nextLocation == to) {
                    break;
                }
            }
        }
    }

    vector<Road*> path;
    if (parent.count(to)) {
        Location* current = to;
        while (current != from) {
            Road* road = parent[current];
            path.push_back(road);
            current = (road->from == current) ? road->to : road->from;
        }
        reverse(path.begin(), path.end());
    }

    return path;
}