#include<bits/stdc++.h>
using namespace std;

int n, cmin, res;
int a[20][20];
int vs[50];
string ans;

void Try(int i, int tmp, int cnt, vector<int> v)
{
	if(tmp + cmin * (n-cnt+1) >= res)
		return;
	if(cnt == n)
	{
		tmp += a[i][1];
		v.push_back(1);
		if(tmp < res)
		{
			res = tmp;
			string tmp2 = "(";
			for(int k = 0; k< v.size(); k++)
			{
				tmp2 += to_string(v[k]);
				if(k != v.size()-1)	tmp2 += ",";
			}
			tmp2 +=")";
			ans = tmp2;
		}
		return;
	}
	for(int j = 2; j<=n; j++)	
	{
		if(vs[j] == 0)
		{
			vs[j] = 1;
			v.push_back(j);
			Try(j, tmp+a[i][j], cnt+1, v);
			v.pop_back();
			vs[j] = 0;
		}
	}
}

int main()
{

	cin >> n;
	for(int i = 1; i<=n; i++)
		vs[i] = 0;
	cmin = INT_MAX;
	res = INT_MAX;
	for(int i = 1; i<= n; i++)
	{
		for(int j = 1; j<= n; j++)
		{
			cin >> a[i][j];
			if(i != j)
				cmin = min(cmin, a[i][j]);
		}
	}
	vs[1] = 1;
	Try(1, 0, 1, {1});
	cout << ans << endl;
	cout << res;
}
