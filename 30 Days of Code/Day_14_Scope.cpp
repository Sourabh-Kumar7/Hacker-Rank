#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    vector<int> b;

    Difference(vector<int> a) 
    {
        for(int i=0;i<a.size();i++)
        {
            b.push_back(a[i]);
        }
    }
    void computeDifference()
    {
        sort(b.begin(),b.end());
        int p = b.size();
        maximumDifference = abs(b[0]-b[p-1]);
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
