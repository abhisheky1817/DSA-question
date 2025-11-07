#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string r;
    cin >> s >> r;
    
    int ls = s.length();
    int lr = r.length();
    
    int index = s.find(r);            // pehli baar kaha mila
    char ch = s[index - 1];           // uske pehle ka character
    
    string temp = "";                 // replacement string banane ke liye
    for (int i = 0; i < lr; i++) {
        temp += ch;                   // repeat ch lr baar
    }
    
    while (index < ls && index != -1) { // jab tak milta rahe
        s.replace(index, lr, temp);
        index = s.find(r, index + lr);  // next find karne ke liye
    }
    
    cout << s;
}
