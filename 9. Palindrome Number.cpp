#include <iostream>
int main(){
    using namespace std;
    string x1;
    cin >> x1;
    int l = x1.length()/2;
    string fh, lh;
    if (x1.length()%2 == 0){
        for (int i = 0; i < l; i++){
            fh += x1[i];
        }
        for (int j = x1.length()-1; j >= l; j--){
            lh += x1[j];
        }
    }
    else{
        for (int i = 0; i < l; i++){
            fh += x1[i];
        }
        for (int j = x1.length()-1; j > l ; j--){
            lh += x1[j];
        }
    }
    if (fh == lh){
        cout << true;
    }
    else{
        cout << false;
    }
}