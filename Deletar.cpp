#include <iostream>
#include <fstream> //biblioteca utlizada pra interagir com arquivos externos
#include <cstring> // biclioteca necessaria para o metodo c_str()

    // ofstream ifstream fstream

using namespace std;

int Remover(){
    ifstream arquivoR;
    string titulo;
    string texto;
    
    cout << "Defina o nome do Arquivo de texto ser Deletado\n";
    cin.ignore();
    getline(cin, titulo);

    titulo = titulo + ".txt";

    arquivoR.open(titulo);

    if(arquivoR.is_open()){
        remove(titulo.c_str()); // metodo c_str() transforma uma string em char *
        cout << "\narquivo Deletado com sucesso";
    } else {
        cout << "\narquivo não encontrado";
    }

    return 0;
}