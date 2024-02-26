#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> deepak) {
    for (int i = 0; i < deepak.size(); ++i) {
        cout << deepak[i] << " ";
    }
    cout << endl;
}
int main()
{   vector<int> deepak;
    for(int i=0;i<=5;i=i+1){
    int x;
    cin>>x;
    deepak.push_back(x);



    }
    printVec(deepak);
    return 0;
}
