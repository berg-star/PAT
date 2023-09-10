#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isRight(string str){
    int size = str.size();
    int P_num = 0;
    int T_num = 0;
    for(int i = 0;i<size;i++){
        if(str[i] =='P'||str[i] == 'A'||str[i] == 'T'){
            if(str[i] == 'P')
                P_num++;
            if(str[i] == 'T' && P_num != 0)
                T_num++;
            if(str[i] == 'T' && P_num == 0){
                return false;
            }
        }else{
        return false;
        }
    }
    int pre_A = 0,mid_A = 0,last_A = 0;
    if(T_num == 1 && P_num == 1){
        pre_A = str.find('P',0);
        mid_A = str.find('T',pre_A + 1) - pre_A - 1;
        last_A = size - str.find('T', pre_A + 1) - 1;
        if(mid_A == 0)
            return false;
        if(pre_A*mid_A == last_A)
            return true;
        else
            return false;
    }else
        return false;
    
}
int main(){
    int row;
    cin>>row;
    vector<string>str(row);
    for(int i = 0;i < row;i++){
        cin>>str[i];
    }
    for(int i = 0;i<row;i++){
        if(isRight(str[i]))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}