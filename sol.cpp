#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

vector<ar<int, 2>> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	v=vector<ar<int, 2>> (n);
	for(int i=0; i<n; ++i)
		cin >> v[i][0] >> v[i][1];
	int neg=0, pos=0;
	//find the number of points in left and right side of the y-axis
	//one of them MUST be equal to one to pass the condition
	for(int i=0; i<n; ++i) {
		if((v[i][0]<0&&v[i][1]>=0)||(v[i][0]<=0&&v[i][1]<0))
			neg++;
		else if((v[i][0]>0&&v[i][1]>=0)||(v[i][0]>=0&&v[i][1]<0))
			pos++;
	}
	cout << (neg>1&&pos>1?"No":"Yes") << "\n";
}
