//
//  게임 개발.cpp
//  algorithm_practice
//
//  Created by 신상용 on 2022/08/26.
//

#include <bits/stdc++.h>
using namespace std;

static constexpr int moving[4][2] = {
    {-1, 0}, {0, 1}, {1, 0}, {0, -1}
};
static int N, M, curX, curY, pos, maps[50][50];
enum class state{land, ocean, visited};

int solve(){
    int ret = 1;
    maps[curX][curY] = static_cast<int>(state::visited);
    
    while(true){
        int returnCnt = 0;
        for(int i = 0; i < 4; ++i, ++returnCnt){
            pos = (pos - 1 < 0) ? 3 : pos - 1;
            if (maps[curX + moving[pos][0]][curY + moving[pos][1]] == static_cast<int>(state::land)){
                curX += moving[pos][0], curY += moving[pos][1];
                maps[curX][curY] = static_cast<int>(state::visited);
                ret++;
                break;
            }
        }
        if(returnCnt == 4){
            curX -= moving[pos][0], curY -= moving[pos][1];
            if(maps[curX][curY] == static_cast<int>(state::ocean))
                break;
            
        }
    }
    return ret;
}



int main(){
    ios_base :: sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
    cin >> N >> M;
    cin >> curX >> curY >> pos;
    for(int x = 0; x < N; x++){
        for(int y = 0; y < M; y++){
            cin >> maps[x][y];
        }
    }
    cout << solve() << '\n';
}
