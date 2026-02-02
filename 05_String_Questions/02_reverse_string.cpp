#include <bits/stdc++.h>

using namespace std;

int getLen(char str[]){
    int len = 0;
    int i=0;
    while(str[i] != '\0'){
        len++;
        i++;
    }
    
    return len++;
}

void reverse(char str[], int len){
    int start=0;
    int end=len-1;
    
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
}


int main(){
    
    char str[10];
    cin>>str;
    
    int len = getLen(str);
    
    cout<<"len is: "<<len<<endl;
    
    cout<<"Before string: "<<str<<endl;
    
    reverse(str,len);
    
    cout<<"After reverse: "<<str<<endl;
    


    return 0;
}