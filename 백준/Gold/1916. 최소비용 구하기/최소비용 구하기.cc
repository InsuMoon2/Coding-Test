#include <bits/stdc++.h>

using namespace std;

#define INF 987654321
using pii= pair<int, int>;
vector<pii> vec[1001];
vector<int> dist(1001, INF);

void dijkstra(int dept){
    dist[dept] =0;
    priority_queue<pii> pq;
    pq.push({dist[dept], dept}); // 시작 weight, vertex
    
    while(!pq.empty()){
        int cur = pq.top().second;
        int distance = pq.top().first * -1; //현재까지 dept에서 cur 정점까지 가는 dist
        pq.pop();
        
        if(dist[cur]<distance) continue; //이미 distance가 최소로 변경됨 
        
        
        for(int i=0; i<vec[cur].size(); i++){
            int nxt=vec[cur][i].first; //cur 정점과 연결된 정점들
            int nxtdist = vec[cur][i].second + distance;
            //현재까지 dept에서 cur정점까지의 최소 거리와 
            //cur을 지나 nxt까지의 거리를 더한것 cur정점에서 nxt까지의 distance      
            // e.g) 1 -> 4(cur) -> 5(nxt)
            
            if(nxtdist<dist[nxt]){//만약 cur을 지나가는 것이 더 가깝다면
                dist[nxt]= nxtdist;
                pq.push({nxtdist*-1, nxt});//새롭게 갱신된 weight와 vertex
            }
        }
    }
}
int main(){
    int N, M; cin>>N>>M;//도시의 개수, 버스의 개수
    
    while(M--){
        int s, e, w; cin>>s>>e>>w;
        vec[s].push_back({e, w});
    }
    
    int dept, dest;
    cin>>dept>>dest;
    
    dijkstra(dept);
    
    cout<<dist[dest];
    
    return 0;
}