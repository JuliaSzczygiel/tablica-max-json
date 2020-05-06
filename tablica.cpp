#include <iostream>
#include <fstream>

using namespace std;

int main()

{
    ifstream wejscie;
    ofstream wyjscie;

    wejscie.open ("wejscie.txt");
    wyjscie.open ("wyjscie.json");

    int t[10];
    
    if (wejscie.good()) 
    {
        while(!wejscie.eof()) 
            for(int i=0; i<10; i++)
            wejscie>>t[i];
    }

    int max=t[0];

    for(int i=0; i<10; i++)
    {
        if(max<t[i])
        max=t[i];
    }

    wyjscie<<" [ \n { \n \"najwieksza liczba to\" :\"" <<max;

    wejscie.close();
    wyjscie.close();
    
    system("pause");
    return 0;
}
