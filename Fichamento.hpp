#pragma once
#include <string>
#include "Livro.hpp"
#include <iostream>


#ifndef PESSOA_H_
#define PESSOA_H_

using namespace std;

class Fichamento : public Livro {

    private:

        int id;
        string resumo;
        string assunto;
    public:
        void setResumo(string res);
        string getResumo();
        void setAssunto(string ass);
        string getAssunto();
        void setId(int i);
        int getId();
        
};

#endif