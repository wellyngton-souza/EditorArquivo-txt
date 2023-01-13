#include <iostream>
#include <fstream> //biblioteca utlizada pra interagir com arquivos externos
#include <cstring> // biclioteca necessaria para o metodo c_str()

/*-- Importações de outros arquivos --*/
#include "Criar.cpp"
#include "Editar.cpp"
#include "Visualizar.cpp"
#include "Deletar.cpp"

    // ofstream ifstream fstream

using namespace std;

int main(){
    system("clear");
    string resposta;

    cout << "Deseja editar ou criar um arquivo de texto?";
    cout << "\n1- Criar\n2- Editar\n3- Ler\n4- Deletar\n\n";
    cin >> resposta;
    
    if (resposta == "1"){
        Criar(); //Chama função arquivo Criar
    }
    if (resposta == "2"){
        Editar(); //Chama função arquivo Editar
    }
    if (resposta == "3"){
        Visualizar(); //Chama função arquivo Visualizar
    }
    if (resposta == "4"){
        Remover(); //Chama função arquivo Deletar
    }

    return 0;
}