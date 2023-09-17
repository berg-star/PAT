#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int number;
    int min = 100,min_index;
    int max = 0,max_index;
    cin>>number;
    vector<string>name(number);
    vector<string>id(number);
    vector<int>credit(number);
    for(int i = 0;i < number; i++){
        cin>>name[i]>>id[i]>>credit[i];
      if(credit[i] < min){
          min = credit[i];
          min_index = i;
      }
        if(credit[i] > max){
          max = credit[i];
            max_index = i;
      }
    }
    cout<<name[max_index]<<" "<<id[max_index]<<endl;
    cout<<name[min_index]<<" "<<id[min_index];
    return 0;
    
    
}