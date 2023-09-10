#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
string in;
    cin>>in;
    int number = 0;
    int size = in.size();
    for(int i = 0;i<size;i++){
        int temp = in[i] - '0';
        number +=temp;
    }
    string array[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string str = to_string(number);
    size = str.size();
    for(int i = 0;i<size;i++){
        int temp = str[i] - '0';
        cout<<array[temp];
        if(i != size - 1)
        cout<<' ';
    }
    return 0;
} 