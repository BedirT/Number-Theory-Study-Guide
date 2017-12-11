#include <iostream>
#include <string>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if (a == 0) return b;
    return gcd(b % a, a);
}

int eulersTotient(int n){    
    int result = n;

    for (int p=2; p*p<=n; ++p){
        if (n % p == 0){
            while (n % p == 0) n /= p;
            result -= (result / p);
        }
    }
 
    if (n > 1) result -= (result / n);
    return result;
}
 
int main(){
    int n;
    
    vector<int> results[100000];
    for(int i = 1; i < 100000; ++i){
        results[eulersTotient(i)].push_back(i);
    }
    while(cin >> n){
        cout << results[n].size() << endl;
        for(int i = 0; i < results[n].size(); ++i){
            cout << results[n][i] << endl;
        }
    }
}