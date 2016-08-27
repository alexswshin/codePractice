// https://www.acmicpc.net/problem/11399
// 2016-08-21

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a.begin(),a.end());

	int sum=0,ans=0;
	for(int i=0; i<n; i++){
		sum += a[i];
		ans += sum;
	}
	cout << ans << endl;
	return 0;
}
