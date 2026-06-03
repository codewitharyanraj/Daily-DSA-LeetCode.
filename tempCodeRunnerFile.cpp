#include <bits/stdc++.h>
using namespace std;
int main() {
        int r = 5;
        int n = r;
        // REVERSE PYRAMID PATTERN
        for (int i = 0; i<r; i++) { //outer loop
            // space
            for (int j = 0; j<i; j++) {
                cout << "-";   
            }
            // star
            for (int j = 0; j<(2*(r-i)-1); j++) { //my little wrong approach was this :- for (int j = 0; j<(2*r-1); j++) {  
                cout << "*";
            }
            // space
             for (int j = 0; j<i; j++) {
                cout << "-";   
            }
            cout << endl;
            // r--;
        }}