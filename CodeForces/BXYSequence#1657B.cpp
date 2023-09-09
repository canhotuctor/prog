#include <iostream>
using namespace std;

double testa(double n,double B,double x,double y){
    double atual = 0;
    double sum = 0;
    int i = 0;
    
    while(i < n){
        if (atual+x <= B){
            atual+=x;
            sum+=atual;
        }
        else{
            atual-=y;
            sum+=atual;
        }
        i++;
    } 
   return sum;
}

int main()
{
    int t;
    cin >> t;
    double lista[t];

    for(int i = 0; i < t; i++){
        double a,b,c,d;
        cin >> a >> b >> c >> d;
        
        lista[i] = testa(a,b,c,d);    
    }

    for(int i = 0; i < t; i++){
        cout << lista[i] << endl;
    }
    return 0;
}