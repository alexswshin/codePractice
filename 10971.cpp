// https://www.acmicpc.net/problem/10971
// 2016-08-19

// QUESTION : int ans = 2147483647; How come if the number is different, the answer is wrong
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	int w[40][40];
	int ans = 2147483647;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&w[i][j]);
        }
    }
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        v[i] = i;
    }
	do{
        bool ok = true;
        int min_sum = 0;
        for (int i=0; i<n-1; i++) {
            if (w[v[i]][v[i+1]] == 0) {
                ok = false;
            } else {
                min_sum += w[v[i]][v[i+1]];
            }
        }
        if (ok && w[v[n-1]][v[0]] != 0) {
            min_sum += w[v[n-1]][v[0]];
            if (ans > min_sum) ans = min_sum;
        }
	}while(next_permutation(v.begin(),v.end()));
  printf("%d\n",ans);
	return 0;
}
