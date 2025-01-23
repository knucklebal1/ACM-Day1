#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	int N, Q;
	char c, d;
	string S;
	
	cin >> N;
	cin >> S;
	cin >> Q;
	
	// 读取所有的操作并存储
	vector<pair<char, char>> operations(Q);
	for (int i = 0; i < Q; i++) {
		cin >> c >> d;
		operations[i] = {c, d};
	}
	
	// 合并操作，得到最终需要修改的所有字母记录
	unordered_map<char, char> finalChanges;//映射操作，目的是使c与d之间产生对应关系
	for (const auto& op : operations) {//op代表{c,d}对
		// 遍历所有字符，将需要修改的字符更新为最终目标
		for (char ch = 'a'; ch <= 'z'; ch++) {//		finalChanges={{ch1,x1},{ch2,x2},...}; finalChanges[ch1]=x1，x1即变化值
			if (finalChanges.find(ch) != finalChanges.end() && finalChanges[ch] == op.first) {//op.first=c
				finalChanges[ch] = op.second;//op.second=d
			}
		}
		// 如果当前字符没有被修改过，直接更新
		if (finalChanges.find(op.first) == finalChanges.end()) {//由于finalChanges刚开始未被赋值（为空），因此跳过上面的for循环，先执行这一步（赋值）
			finalChanges[op.first] = op.second;
		}
	}
	
	// 遍历字符串进行修改
	for (int i = 0; i < S.size(); i++) {
		if (finalChanges.find(S[i]) != finalChanges.end()) {
			S[i] = finalChanges[S[i]];
		}
	}
	
	cout << S << endl;
	return 0;
}
