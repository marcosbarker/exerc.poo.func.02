#include <iostream>
using namespace std;

bool primo(unsigned long long int n) {
    unsigned long long int i;
    
    if (n == 0 || n == 1) { //0 e 1 nao sao primos
        return false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
                break;
            }
        }
    }

    return true;
}

int main() {
    unsigned long long int n;
    bool eprimo;
    
    cout << "Digite um inteiro positivo: ";
    cin >> n;

    eprimo = primo(n);
    
    if (eprimo)
        cout << n << " e numero primo\n";
    else
        cout << n << " nao e numero primo\n";

    
    return 0;
}