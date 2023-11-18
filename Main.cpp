#include <iostream>
#include <vector>
#include <string>
#include "Fichamento.hpp"
#include "Livro.hpp"

using namespace std;

void Cadastro();

Livro _livro;

int main(){
    
    vector<string> livro;
    bool operacao;
    int opcao;
    cout << "Bem vindo!" << endl;
    while(!operacao){
        cout << "Escolha uma opção!" << endl;
        cout << "Opção 1: Adicionar cadastro" << endl;
        cout << "Opção 2: Listar cadastros" << endl;
        cout << "Opção 3: Pesquisar cadastro" << endl;
        cout << "Opção 4: Editar cadastro" << endl;
        cout << "Opção 5: Excluir cadastro" << endl;
        cout << "Opção 0: Sair" << endl;
        cin >> opcao;
        switch(opcao){
            case 1:
                cout << "1";
                Cadastro();
                break;
            case 2:
                cout << "2";
                for (auto l: livro){
                    cout << l << endl;
                }
                break;
            case 3:
                cout << "3";
                break;
            case 4:
                cout << "4";
                break;
            case 5:
                cout << "5";
                break;
            case 0:
                opcao = true;
                break;
            default:
                cout << "Selecione alguma opção acima!!!";
        }
    }
    return 0;    
}

void Cadastro(){
    string titulo;
    string autor;
    string genero;
    cout << "Digite o titulo: " << endl;
    cin >> titulo;
    cout << "Digite o autor:" << endl;
    cin >> autor;
    cout << "Digite o genêro:";
    cin >> genero;

    _livro.setAutor(autor);
    _livro.setTitulo(titulo);
    _livro.setGenero(genero);
}

