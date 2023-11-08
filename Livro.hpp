
#ifndef LIVRO_H_
#define LIVRO_H_


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Livro{

    private:
        string titulo;
        string genero;
        string autor;
        int id;

     public:
        void setTitulo(string tit);
        string getTitulo();
        void setGenero(string gen);
        string getGenero();
        void setId(int i);
        int getId();
        void setAutor(string aut);
        string getAutor();
};
#endif