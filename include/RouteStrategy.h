#include<Graph.h>
#include<Location.h>
#include<Road.h>
using namespace std;
class RouteStratergy{
public:
    virtual vector<Road*> findRoute(Graph* g,Location* from , Location* to)= 0;
};
