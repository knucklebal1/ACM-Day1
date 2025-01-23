#include <iostream>
#include <string>
#include <algorithm>
int main(){
	int n;
	std::string s;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>s;
		std::transform(s.begin(),s.end(),s.begin(),::toupper);
		if(s=="YES"){
			std::cout<<"YES"<<'\n';
		}else{
			std::cout<<"NO"<<'\n';
		}
	}
    return 0;
}


