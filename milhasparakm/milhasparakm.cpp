#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    
    float milhas;
    cout << "por favor digite as milhas" << '\n';
    cin >> milhas;
    float kilometros = milhas * 1.609;
    float metros = milhas * 1609;
    cout << milhas << " milhas e equivalente a " << kilometros 
    << " kilometros e " << metros << " metros." << '\n';

    return 0;
}
