//By ivedmohan, contest: Sheet #1 (Data type - Conditions), problem: (F) Digits Summation, Accepted, #, Copy
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,a,b,c;
	cin >> n >> m;
	a = n%10;
	b = m%10;
	c = a+b;
	cout << c << endl;
	return 0;
}
