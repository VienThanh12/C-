#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    freopen("example_file.txt", "r" ,stdin);
    freopen("example_file.out", "w" ,stdout);
    string s;
    ll cnt_char = 0, cnt_line = 0;
    cout << "Second Question" << endl;
    while(getline(cin, s)){
        cout << s;
        cnt_char += s.length();
        cnt_line ++;
    }
    cout << endl << endl;
    cout << "First Question" << endl;
    cout << "How many characters: " << cnt_char << endl;
    cout << "How many lines: " << cnt_line << endl;
    cout << "The average length of the lines: " << cnt_char / cnt_line << endl;
    cout << "Second Question";
    //freopen("example_file.txt", "r" ,stdin);

}
