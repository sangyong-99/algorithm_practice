//
//  왕실의 나이트.cpp
//  algorithm_practice
//
//  Created by 신상용 on 2022/08/26.
//

#include <bits/stdc++.h>
using namespace std;

string input_data;
int row, column, cnt, nx, ny;
int dx[] = {-2, -2, 1, -1, 2, 2, -1, 1};
int dy[] = {-1, 1, 2, 2, -1, 1, -2, -2};

bool check(int nx, int ny){
    if(nx <= 0 || ny <= 0 || nx > 8 || ny > 8) return false;
    return true;
}

int main(){
    cin >> input_data;
    row = (input_data[0] - 'a') + 1;
    column = input_data[1] - '0';
    for(int i = 0; i < 8; i++){
        nx = row + dx[i];
        ny = column + dy[i];
        if(check(nx, ny)) cnt++;
    }
    cout << cnt << endl;
    
    
}
