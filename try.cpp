#include<bits/stdc++.h>
using namespace std; 
int f[30010];
int v[24],p[24];
int main()
{
	int n,m;//n最总钱数,m购买数
	
	cin>>n>>m;
	for(int i=1;i<=m;i++)
		cin>>v[i]>>p[i];
	
	for(int i=1;i<=m;i++){//背包循环每个物品
		for(int j=n;j>=v[i];j--){
			f[j]=max(f[j],f[j-v[i]]+v[i]*p[i]);
		}
	}
	cout<<f[n];
	
	return 0;
}//试一试


