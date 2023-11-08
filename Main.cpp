#include <iostream>
#include <string>
#include "Fichamento.hpp"
#include "Livro.hpp"

using namespace std;

void Cadastro;

int main(){
   
    Fichamento fichamento;
    Livro livro;
    livro.setTitulo( "titulo" );
    string autor;
    string titulo;
    string genero;

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
                    
                break;
            case 2:
                cout << "2";
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
    
    /*cin >> opcao2;
    cin >> opcao3;
    cin >> opcao4;
    cin >> opcao5;*/

    /*switch(operacao){
        case '1':
        cout << "Digite as seguintes infornmações: " << endl;
        cout << "Titulo: " << endl;
        cout << "Genero: " << endl;
        cout << "Autor: " << endl;

       
    } */
    /*
    while(operacao){
        

        if(operacao == opcao1){
            cout << "Digite o titulo: " << endl;
            cin >> titulo;

            cout << "Digite o gênero: ";
            cin >> genero;

            cout << "Digite o autor: ";
            cin >> autor;
            

            if(opcao1 == true){

                 cout << "Cadastro salvo com sucesso!" << endl;
                 break;
            }
            

        }

        if(operacao == opcao2){
            //Print do cadastro feito
            operacao = false;

        }

        if(operacao == opcao3){
            //Pesquisar o cadastro
            operacao = false;

        }

        if(operacao == opcao4){
            //Editar
            operacao = false;

        }

        if(operacao == opcao5){
            //Excluir
            operacao = false;

        }

    }  */

    return 0;
    
}

void Cadastro(opcao){

     
    cout << "Digite o titulo: " << endl;
        cin >> titulo;

    cout << "Digite o gênero: ";
        cin >> genero;

    cout << "Digite o autor: ";
        cin >> autor;


}