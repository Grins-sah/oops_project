#include<RouteStrategy.h>
#include<bits/stdc++.h>
using namespace std;
class Dijkstra : public RouteStratergy{
private:
public:
    vector<Road*> findRoute(Graph* g,Location* from ,Location* to) override;
};