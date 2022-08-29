//
//  상하좌우.cpp
//  algorithm_practice
//
//  Created by 신상용 on 2022/08/26.
//

#include <bits/stdc++.h>
using namespace std;

int n;
string cc;
int x = 1, y = 1;

//L R U D;
int nx[] = {0, 0, -1, 1};
int ny[] = {-1, 1, 0, 0};
string move_type[4] = {"L", "R", "U", "D"};
string aaa;
int dx = 0; int dy = 0;

int main(){
    cin >> n;
    cin.ignore();
    getline(cin, cc);   //두번째 줄 입력
    istringstream ss(cc);   //istringstream으로 변경
    string stringBuffer;
    vector<string> plans;
//    while (getline(ss, stringBuffer, ' ')){       //공백 무시하고 공백으로 나누어 stringBuffer에 넣고 plans 벡터에 삽입
//            plans.push_back(stringBuffer);
//    }
    while(ss>>stringBuffer){                            //공백 무시하고 공백으로 나누어 stringBuffer에 넣고 plans 벡터에 삽입
        plans.push_back(stringBuffer);
    }
    for(int i = 0; i < plans.size(); i++){
        
        for(int j = 0; j < 4; j++){
            if(plans[i] == move_type[j]){
                dx = x + nx[j];
                dy = y + ny[j];
                break;
            }
        }
        if(dx<=0 || dy<=0 || dx>n || dy>n) continue;
        x = dx; y = dy;
    }
    cout << x << ' ' << y << endl;
}
