#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include<vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <stdio.h>

using namespace std;
int main() {
	vector<string>str;
	int i = 0;
	string s;
	while (cin >> s) {
		i++;
		str.push_back(s);
		if (getchar() == '\n')
			break;
	}
	reverse(str.begin(), str.end());
	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
		if (i != str.size() - 1)
			cout << " ";
	}
	return 0;
}