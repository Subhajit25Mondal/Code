//
// Calculating Greatest common divisor(GCD) of 2 nos
//
#include <iostream>
#include <math.h>
using namespace std;
int gcd(int i,int j){
    i=abs(i); j=abs(j);
    int nos = (i<j)?i:j,res=0;
    for (int q = 1; q <= nos; ++q) {
        res = ((i%q==0)&&(j%q==0))?q:res;
    }
    return res;
}
int main(){
    int i,j;
    cout<<"Enter 2 nos: ";
    if(!(cin>>i>>j)){
        cout<<"Please enter 2 integers";
        cin.clear();
        cin.ignore(1000,'\n');
    } else{
        cout<<endl<<gcd(i,j);
    }
    return 0;
}
