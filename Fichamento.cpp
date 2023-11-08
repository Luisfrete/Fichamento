#include <iostream>
#include <string>
#include "Fichamento.hpp"

using namespace std;

void Fichamento::setResumo(string res){
    resumo = res;
}
string Fichamento::getResumo(){
    return resumo;
}

void Fichamento::setAssunto(string ass){
    assunto = ass;
}
string Fichamento::getAssunto(){
    return assunto;
}

void Fichamento::setId(int i){
    id = i;
}
int Fichamento::getId(){
    return id;
}

