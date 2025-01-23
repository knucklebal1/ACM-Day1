#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int t,n,m,min,c;
	char a[51];
	char grade[]={"ABCDEFG"};
	cin>>t;
	for(int i=0;i<t;i++){
		c=0;
		min=0;
		cin>>n>>m;
		cin>>a;
		for(int j=0;j<7;j++){
			c=count(a,a+strlen(a),grade[j]);
			if(c<m){
				min+=m-c;
			}	
		}
		cout<<min<<'\n';
	}
	
	return 0;
}
