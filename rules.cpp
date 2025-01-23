#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int n,m,k,c=0,obey,rule;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		obey=0;
		for(int j=0;j<n;j++){
			cin>>rule;
			if(rule==k){
				obey++;
			}
		}
		if(obey>=n/2+(n%2)){
			c++;
		}
	}
	if(c>=m/2+(m%2)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}
