#include "BFSRoute.h"
vector<string> BFSRoute::findRoute(Graph* g, Location* from, Location* to)  {
    unordered_set<string> s;
    queue<pair<string,int>> q;
    q.push({from->getName(),0});
    vector<string> r;
    int ans = INT_MAX;
    while(q.size()!=0){
        auto x = q.front();
        q.pop();
        if(s.count(x.first)==0)continue;
        s.insert(x.first);
        for(auto ele : g->getNeighbours(x.first)){
            if(ele.first->getName()==to->getName()){
                ans = min(ans,x.second);
            }else{
                q.push({ele.first->getName(),x.second+ele.second->getDist()});
            }
        }
    }
    cout<<ans<<endl;
    return {};
}