#include <iostream>
#include <string>
using namespace std;

class Pessoa {
    public:
        string nome;
        int idade;
        
        void dizer_ola() {
            cout << "Olá! " << nome << " sua idade é: " << idade <<endl;
        }
};

int main()
{
    Pessoa p;
    p.nome = "Lucas";
    p.idade = 15;
    
    p.dizer_ola();
    
    return 0;
}
