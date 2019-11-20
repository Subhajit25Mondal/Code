// Generates a random number from 1 to 10 and then asks the user to guess the number. If the number is greater, it prints "greater" else "lower".
//User needs to guess the number

#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int random_number,guess=0;
    srand(time(NULL));
    random_number = rand() % 10 + 1;
    do{
        cout<<endl<<"Enter Random Number between 1 to 10: ";
        if(!(cin>>guess)){
            cout<<endl<<"Enter a number";
            cin.clear();
            cin.ignore(1000,'\n');
        }
        else{
            if (guess>random_number){
                cout<<endl<<"Entered Number is greater.";
            }
            else{
                if (guess<random_number){
                    cout<<endl<<"Entered Number is smaller.";
                }
            }
        }
    }
    while(guess!=random_number);
    cout<<"Congratulations!! You guessed it";
    return 0;
}


