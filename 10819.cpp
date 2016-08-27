// https://www.acmicpc.net/problem/10819
// 2016-08-17

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int calc(vector<int> &a){
	int sum = 0;
	for(int i = 1 ; i < a.size() ; i++)
	{
		sum += abs(a[i]-a[i-1]);
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;

	// setup number vector
	vector<int> a(n);
	for(int i = 0; i < n ; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(),a.end());

	int ans = 0;

	do{
		int temp = calc(a);
		ans = max(ans,temp);
		//if(ans<temp){
		//	ans = temp;
		//}
	}while(next_permutation(a.begin(),a.end()));

	cout << ans << '\n';
	return 0;
}
