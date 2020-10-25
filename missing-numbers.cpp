#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    long long n, s1 = 0, s2 = 0;
    cin >> n;
    if(n % 2 == 0)
    	s1 = (n * (n + 1)) /2;
    else
    	s1 = n * ((n + 1) / 2);
    
    for(int i = 1; i < n; i++){
    	long long a;
    	cin >> a;    //
    	s2 += a;
	}
	
	cout << s1 - s2;
    return 0;
}