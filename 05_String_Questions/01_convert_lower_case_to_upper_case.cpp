#include <bits/stdc++.h>

using namespace std;

int main(){

    char name[10];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    
    // cout << strlen(name) << "\n";
    // cout << sizeof(name) << "\n";

    for(int i=0; i<strlen(name); i++){
        char ch = name[i];
        if(ch >= 'a' && ch <= 'z'){
            name[i] = name[i] + 'A' - 'a';
        }
    }
    cout<<name;
    cout<<endl;




    return 0;
}