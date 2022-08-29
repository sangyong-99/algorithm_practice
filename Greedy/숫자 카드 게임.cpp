//
//  숫자 카드 게임.cpp
//  algorithm_practice
//
//  Created by 신상용 on 2022/08/24.
//

#include <bits/stdc++.h>
using namespace std;

int result;

int main(){
    int n, m, a;
    cin >> n >> m;
    
    for(int i = 0; i<n; i++){
        int min_value = 10001;
        for(int j = 0; j<m; j++){
            cin >> a;
            min_value = min(min_value, a);
        }
        result = max(result, min_value);
    }
    
    cout << result;
}
