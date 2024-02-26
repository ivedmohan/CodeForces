// By ivedmohan, contest: Sheet #1 (Data type - Conditions), problem: (K) Max and Min, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c;
	cin >> a >>b >> c;
	
	cout << min({a,b,c}) << " " << max({a,b,c}); 
	return 0;
}
