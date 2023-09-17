#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
 int main() {
    int number;
    cin >> number;
    vector<int>vec(number);
    for (int i = 0; i < number; i++) {
        cin >> vec[i];
    }
    set<int>se;
    for (int i = 0; i < number; i++) {
        int temp = vec[i];
        while (temp != 1) {
            temp = temp % 2 == 0 ? temp >> 1 : (temp * 3 + 1)/2;
            se.insert(temp);
        }
    }
        int flag = 0;
        vector<int>res;
        for (int i = 0; i < number; i++) {
            if (!se.count(vec[i])) {
             res.push_back(vec[i]);
            }
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.begin()+res.size());
        for (int i = 0; i < res.size(); i++) {
			cout<<res[i];
            if (i != res.size() - 1) {
				cout<<" ";
			}
        }
        return 0;
}