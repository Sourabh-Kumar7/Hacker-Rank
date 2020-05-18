#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int n;
    double d1;
    string s2;
    string t;

    getline(cin , t);
    n= stoi(t);
    cout<<n+i<<endl;

    
    getline(cin , t);
    d1= stod(t);
    cout<<fixed<<setprecision(1)<<d1+d<<endl;

    getline (cin, s2);
    cout<< s+s2 <<endl;

    return 0;
}
