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
    cout << "WAIT FOR CALCULATION!\n";
    vector<int> results[100000];
    for(int i = 1; i < 100000; ++i){
        results[eulersTotient(i)].push_back(i);
    }
    cout << "Done Calculating!\nInput n (the number that you " <<  
    "want to find all x's\nand total number of x's for Φ(x) = n): ";

    while(cin >> n){
        cout << "For Φ(x) = " << n << " we have " << results[n].size() << " positive integers that satisfies x.\n";
        cout << "Input 'yes' to get all the x's.\n" << 
        "Anything else to not to do so: ";
        string s; cin >> s;
        if(s == "yes") for(int i = 0; i < results[n].size(); ++i){
            cout << "Φ(" << results[n][i] << ") = " << n << endl;
        }
        cout << "Input n (the number that you want to " << 
        "find all x's\nand total number of x's for Φ(x) = n)" <<
        "\nPress Ctrl+D to get out from program: ";
    }
}