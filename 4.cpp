#include<iostream>
using namespace std;

int main(){

    int i, j, k;

    for(i=1; i<=3; i++){

        for(j=65; j<65+i; j++){
            char ascii = (char)j;
            cout<< ascii << " ";

        }
        cout << "\n";
    }

    for(i=3; i>=1; i--){

        for(k=65+i; k>=65; k--){
            char ascii = (char)k;
            cout<< ascii << " ";
        }
        cout<< "\n";
    }
    return 0;

}
