#include <iostream>
int main(){
    using namespace std;
    string s;
    cin >> s;
    int counter = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'M'){
            counter += 1000;
        }
        else if(s[i] == 'D'){
            counter += 500;
        }
        else if(s[i] == 'L'){
            counter += 50;
        }
        else if(s[i] == 'V'){
            counter += 5;
        }
        else if(s[i] == 'C'){
            if (i != s.length()-1){
                if (s[i+1] == 'D'){
                    counter += 400;
                    i++;
                }
                else if (s[i+1] == 'M'){
                    counter += 900;
                    i++;
                }
                else{
                    counter += 100;
                }
            }
            else{
                counter += 100;
            }
        }
        else if(s[i] == 'X'){
            if (i != s.length()-1){
                if (s[i+1] == 'L'){
                    counter += 40;
                    i++;
                }
                else if (s[i+1] == 'C'){
                    counter += 90;
                    i++;
                }
                else{
                    counter += 10;
                }
            }
            else{
                counter += 10;
            }
        }
        else if(s[i] == 'I'){
            if (i != s.length()-1){
                if (s[i+1] == 'V'){
                    counter += 4;
                    i++;
                }
                else if (s[i+1] == 'X'){
                    counter += 9;
                    i++;
                }
                else{
                    counter += 1;
                }
            }
            else{
                counter += 1;
            }
        }
    }
    cout << counter;
}