#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
	int N;
	char s[61];
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>s;
		if((s[strlen(s)-1]-'0')%2==0){
			cout<<"even\n";
		}else{
			cout<<"odd\n";
		}
	}
	return 0;
}
