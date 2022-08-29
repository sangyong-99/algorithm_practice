//
//  1이 될 때까지.cpp
//  algorithm_practice
//
//  Created by 신상용 on 2022/08/24.
//

#include <bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;

int main(){
    cin >> n >> k;
    while(n != 1){
        if(n % k == 0){
            n /= k;
        }
        else n -= 1;
        cnt++;
    }
    
    cout << cnt << '\n';
}
