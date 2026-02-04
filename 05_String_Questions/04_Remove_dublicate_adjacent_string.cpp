#include <bits/stdc++.h>
using namespace std;



// approch 1 using two pointer(sliding window)
string removeDuplicates(string &s){
    int len = s.length();
    
    int i = 0; 
    int j = i+1;
    
    while(i>=0 && i<j && j<len){
        if(s[i]==s[j]){
            s.erase(i,2);
            if(i-1 >= 0){
                i--;
                j--;
            }
        }
        else{
            i++;
            j++;
        }
    }
    return s;
    
}

//second approch using seconf string for camparsion

string removeDuplicates1(string &s){
    int len = s.length();
    string ans = "";
    
    int i=0;
    while(i<len){
        if(ans.length() > 0 && ans[ans.length()-1]==s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    
    return ans;
}
int main() {
    string str = "abbaca";
    
    
    cout<<"before removing dublicate: "<<str<<endl;
    string ans = removeDuplicates1(str);
    
    cout<<"After removing dublicate: "<<ans<<endl;
    
    return 0;
    
}
