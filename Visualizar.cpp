#include <iostream>
#include <fstream> //biblioteca utlizada pra interagir com arquivos externos

    // ofstream ifstream fstream

using namespace std;

int Visualizar(){
    ifstream arquivoL;
    string titulo;
    string texto;
    
    cout << "Defina o nome do Arquivo a ser Aberto\n";
    cin.ignore();
    getline(cin, titulo);

    titulo = titulo + ".txt";

    arquivoL.open(titulo);

    if(arquivoL.is_open()){
        system("clear");

        cout << "arquivo " << titulo << "\n\n";

        while(getline(arquivoL, texto)){
            cout << texto << "\n";
        }
    } else {
        cout << "\narquivo não encontrado";
    }

    arquivoL.close();

    return 0;
}