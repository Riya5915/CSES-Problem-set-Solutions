#include<bits/stdc++.h>
using namespace std;

int main(){
    string dna;
    cin >> dna;
    dna = dna + " ";
    int n = dna.length();
    int i = 1;
    int count = 1;
    int mx = INT_MIN;
    while (i < n)
    {   
        if(dna[i] == dna[i-1]){
            count++;
        } else {
            count = 1;
        }
        mx = max(mx, count);
        i++;
    }
    cout << mx << endl;
    return 0;
}