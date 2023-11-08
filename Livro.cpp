#include <iostream>
#include <string>
#include "Livro.hpp"

using namespace std;


void Livro::setTitulo(string tit){
    titulo = tit;
}
string Livro::getTitulo(){
    return titulo;
}

void Livro::setGenero(string gen){
    genero = gen;
}
string Livro::getGenero(){
    return genero;
}

void Livro::setId(int i){
    id = i;
}
int Livro::getId(){
    return id;
}
    void Livro::setAutor(string aut){
    autor = aut;
}
string Livro::getAutor(){
    return autor;
}