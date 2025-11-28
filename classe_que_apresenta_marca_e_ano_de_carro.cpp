#include <iostream>
#include <string>
using namespace std;

class Carro {
public:
    string marca;
    int ano;
    
    void apresentar() {
        cout << "A marca do seu carro é " << marca << " e o ano é de " << ano << endl;
    }
};

int main()
{
    Carro c;
    c.marca = "mitsubishi";
    c.ano = 1994;
    c.apresentar();
    
    return 0;
}
