#include <iostream>
#include <fstream> //biblioteca utlizada pra interagir com arquivos externos

    // ofstream ifstream fstream

using namespace std;

int Editar(){
    ifstream arquivoE;
    ofstream arquivoEC;
    string titulo;
    string texto;

    cout << "Nome do arquivo a ser Aberto:\n";
    cin.ignore();
    getline(cin, titulo);

    titulo = titulo + ".txt";

    arquivoE.open(titulo);

    if(arquivoE.is_open()){
        system("clear");
        cout << "Aquivo Aberto com Sucesso\n\n";
        arquivoEC.open(titulo, ios::app); /* ios ele junta o texto que ja estava escrito no arquivo e adiciona esse,
caso nao existisse esse ios, ele iria sobrepor ao texto antigo */
        
        cout << "Defina o texto a ser adicionado ao arquivo\n\n";

        getline(cin, texto);

        arquivoEC<< "\n" << texto;

        cout << "\nTexto Adicionado com Sucesso\n\n";
    } else {
        cout << "\narquivo não encontrado";
    }

    arquivoE.close();

    return 0;
}