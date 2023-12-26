#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.\n";
    string alpha[9] = {"A","B+","B","C+","C","D","F","W"};
                          
    cin.get();
    cin.get();
    cin.get();

    int x = rand()%9;
    cout << "You will get " << alpha[x] <<" in this 261102.";
    
    return 0;
}