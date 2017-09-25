



#include<iostream>
using namespace std;
int main() {
    string pol;
    int result=1;
    cin>>pol;
    for(int i=0;i<pol.length()/2;i++){
        if (pol[i]!=pol[pol.length()-i-1]){
            result=0;
            break;
        }
    }
    cout<< result;
    return 0;
}