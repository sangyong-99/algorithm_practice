//
//  factorial.cpp
//  algorithm_practice
//
//  Created by 신상용 on 2022/08/27.
//

#include <bits/stdc++.h>
using namespace std;

int factorial_iterative(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

int factorial_recursive(int n){
    if(n == 1) return 1;
    return n * factorial_recursive(n-1);
}

int main(){
    cout << "반복적으로 구현: " << factorial_iterative(5) << '\n';
    cout << "재귀적으로 구현: " << factorial_recursive(5) << endl;
    
}
