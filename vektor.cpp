#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> huruf = {'a', 'z', 'i', 'l', 'l'};
    
    vector<char>::iterator it;
    for (it = huruf.begin(); it != huruf.end(); ++it){
        cout << *it << " ";
    }
    
    huruf.front() = 'i';
    huruf.back() = 'l';
    
    cout << endl;
    for (it = huruf.begin(); it != huruf.end(); ++it){
        cout << *it << " ";
    }
}