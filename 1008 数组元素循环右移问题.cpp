#include<iostream>
#include<vector>
using namespace std;
int main() {
	int size;
	cin >> size;
	int move;
	cin >> move;
	vector<int> nums(size);
	for (int i = 0; i < size; i++) {
		cin >> nums[i];
	}
	for (int i = 0; i < move; i++)
	{
		int temp = nums[size - 1];
		for (int j = size - 1; j > 0; j--)
		{
			nums[j] = nums[j - 1];
		}
		nums[0] = temp;
	}
	cout << nums[0];
	for (int i = 1; i < size; i++)
	{
		cout << " " << nums[i];
	}
	return 0;
}