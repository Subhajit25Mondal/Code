//
// Trial and Error Approach
// Horses cost $10, pigs cost $3, and rabbits are only $0.50. A farmer buys 100 animals for $100, How many of each animal did he buy?
//

#include <iostream>
using namespace std;
int main(){
    for (int h = 0; h < 100; ++h) {
        for (int p = 0; p < 100; ++p) {
            for (int r = 0; r < 100; ++r) {
                if ((r+h+p)==100){
                    if((h*10 + p*3 + r*0.5)==100){
                        cout<<"Horses: "<<h<<", Pigs: "<<p<<", Rabbits: "<<r<<endl;
                    }
                }
            }
        }
    }
    return 0;
}