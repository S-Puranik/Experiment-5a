#include<iostream>
using namespace std;

int main(){

    int i, j, k;

    for(i=1; i<=5; i++){

        for(j=1; j<=i; j++){

            if(j % 2 == 0){
                cout<< "0";
            }
            else{
                cout<< "1";
            }
        }
        cout<< "\n";
    }

    return 0;
}
