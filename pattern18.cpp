#include<bits/stdc++.h>
using namespace std;

int main()
{   int N;
    cin>>N;
     cout << "*";
    for (int row = 0; row< N - 2; ++row) {
        cout << "-";
    }
    cout << "*" << endl; 

    // Print the middle lines
    for (int col= 0; col< N - 2; ++col) {
        cout << "|";
        for (int col = 0; col< N - 2; ++col) {
            cout << " ";
        }
        cout << "|" << endl;
    }

    // Print the bottom line
    cout << "*";
    for (int row = 0; row < N - 2; ++row) {
        cout << "-";
    }
    cout << "*" << endl;




    return 0;

}