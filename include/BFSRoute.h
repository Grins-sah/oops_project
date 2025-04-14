#include<RouteStrategy.h>
#include<bits/stdc++.h>
using namespace std;
class BFSRoute : public RouteStratergy{
public:
    vector<Road*> findRoute(Graph* g,Location* from ,Location* to) override;
};