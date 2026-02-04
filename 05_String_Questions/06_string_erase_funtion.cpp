#include<iostream>
#define MAX 1000

using namespace std;



int getLength(char arr[]){
    int i=0;
    while(arr[i] != '\0'){
        i++;
    }
    return i;
}

void erase(char str[], int index, int length) {
    int n = getLength(str);

    if (index < 0 || index >= n || index + length > n) {
        cout << "invalid position" << endl;
        return;
    }

    // Shift characters left
    for (int i = index; i + length <= n; i++) {
        str[i] = str[i + length];
    }
    
    cout<<"str "<<str<<endl;
}



int main(){
    char str[MAX] = "hello this is string that we want to find";
    char word[10] = "this";
    
    erase(str,6,4);
    
    return 0;
}