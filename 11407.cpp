// https://www.acmicpc.net/problem/11047
// 2016-08-21

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int money;
	int n;
	cin >> n >> money;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int ans=0;
	for(int i=n-1 ;i>=0 ;i--)
	{
		ans += money/a[i];
		money = money%a[i];
	}
	cout << ans;
	return 0;
}
