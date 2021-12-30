#include <bits/stdc++.h>
using namespace std;

void search(int k);
int main() {
    int n=3;
    // Recrusive search
        cout << "-------------son.phan--------------" <<"\n";
        for (int b = 0; b <(1<<n); b++) {
            cout<<"b="<<b<<"\n";
            vector<int> subset;
            for (int i = 0; i < n; i++) {
                if (b&(1<<i)) subset.push_back(i);
            }
                for (auto it = subset.begin(); it != subset.end(); it++)
            {
                     cout<< *it <<"  ";
            }
            cout <<"\n";
}

}
void search(int k ){
    vector<int> subset;
    if (k == 3)
    {
        for (auto it = subset.begin(); it != subset.end(); it++)
        {
            cout<< *it << "\n";
        }
    }
    else {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}