//
//  시각.cpp
//  algorithm_practice
//
//  Created by 신상용 on 2022/08/26.
//

#include <bits/stdc++.h>
using namespace std;

int n, cnt;

bool check(int i, int j, int z){
    if(i %10 == 3 || j/10 ==3 || j%10 == 3 || z/10==3 || z%10==3) return true;
    return false;
}

int main(){
    cin >> n;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < 60; j++){
            for(int z = 0; z < 60; z++){
                if(check(i, j, z)) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}


