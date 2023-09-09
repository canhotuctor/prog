#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    int lista[3000][2];

    for(int i = 0; i < t; i++){
        cin >> lista[i][0] >> lista[i][1];
    }
    for(int i = 0; i < t; i++){
        float z = pow((pow(lista[i][0], 2) + pow(lista[i][1], 2)), 0.5);
        int k = z;

        if(k != z)
        {
           cout << 2 << endl;
        }
        else if((lista[i][0] == 0) && (lista[i][1] == 0))
        {
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }      
    }   
    return 0;
}
