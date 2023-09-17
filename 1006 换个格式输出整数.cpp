#include<iostream>
#include<string>
using namespace std;
int main(){
  string number;
    cin >> number;
    char array[2] = { 'B','S' };
    int size = number.size();
    int tag = size - 2;
    int temp = size == 3 ? 0 : 1;
    int count = 0;
    for (int i = tag; i > -1; i--) {

        for (int j = 0; j < number[count] - '0'; j++) {
            cout << array[temp];
        }
        temp++;
        count++;
    }
    for (int i = 1; i < number[size - 1] - '0' + 1; i++) {
        cout << i;
    }
    return 0;
}