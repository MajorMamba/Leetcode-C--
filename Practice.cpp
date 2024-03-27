#include <bits/stdc++.h>
int main(){
    using namespace std;
    vector<string> strs({"flower","flow","flight"});
    string otpt;
    string tmp = strs[0];
    string smlstr = tmp;
    int size = strs.size();
    for (int i = 0; i < size; i++){
        if (strs[i].length() < smlstr.length()){
            smlstr = strs[i];
        }        
    }
    for (int j = 0; j < smlstr.length(); j++){
        int wc = 0;     
        for (int k = 0; k < size; k++){
            string temp = strs[k];
            if (smlstr[j] == temp [j]){
                wc += 1;
            }
            else{
                break;
            }
        }
        if (wc == size){
            otpt += smlstr[j];
        }
        else{
            break;
        }
    }
    cout << otpt;
}