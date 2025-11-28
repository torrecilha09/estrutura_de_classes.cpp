#include <iostream>
#include <string>
using namespace std;

class Pessoa {
public:
    string nome;
    int idade;
    
    void apresentar() {
        cout << "Oi, eu sou " << nome << " e tenho " << idade << " anos " << endl;
    }
};

int main()
{
    Pessoa p;
    p.nome = "Lucas";
    p.idade = 29;
    p.apresentar();
    
    return 0;
}
