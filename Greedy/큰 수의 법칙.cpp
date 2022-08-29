//
//  큰 수의 법칙.cpp
//  algorithm_practice
//
//  Created by 신상용 on 2022/08/24.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int n, m, k, aa, first, second;
    cin >> n >> m >> k;
    
    for(int i = 0; i< n; i++){
        cin >> aa;
        a.push_back(aa);
    }
    sort(a.begin(), a.end(), greater<>());
    first = *(a.begin());
    second = *(a.begin()+1);
    aa = 0;
    
    int count = m/(k+1) *k;
    count += m % (k+1);
    
    aa += count * first;
    aa += (m - count) * second;
    
    cout << aa << endl;
}
