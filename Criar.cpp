#include <iostream>
#include <fstream> //biblioteca utlizada pra interagir com arquivos externos

    // ofstream ifstream fstream

using namespace std;

int Criar(){
    ofstream arquivo;
    string titulo;

    cout << "Defina um nome para o Arquivo que vai ser Criado:\n";
    cin.ignore();
    getline(cin, titulo);

    titulo = titulo + ".txt";

    arquivo.open(titulo);

    cout << "\nAquivo Criado com Sucesso\n\n";

    arquivo.close();

    return 0;
}