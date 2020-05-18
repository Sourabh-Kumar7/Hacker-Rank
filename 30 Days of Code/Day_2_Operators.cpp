#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long unsigned long ull;
typedef double long ld;
 
 
int main() {
    ios::sync_with_stdio(!cin.tie(0));
    
    float mealCost;
    float tip;
    float tax;

    cin>>mealCost;
    cin>>tip;
    cin>>tax;

    float totalcost = mealCost + (mealCost*(tip/100)) + (mealCost*(tax/100));

    int tc = round(totalcost);
    cout<<tc;
}
