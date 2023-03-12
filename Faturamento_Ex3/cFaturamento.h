/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cFaturamento.h
 * Author: Arquivos
 *
 * Created on 12 de Março de 2023, 13:26
 */

#ifndef CFATURAMENTO_H
#define CFATURAMENTO_H
#include <iostream>

using namespace std;



class cFaturamento {
    
    struct diasFaturamento{
        int dia;
        float valor;
        
    };
public:
    cFaturamento();
    cFaturamento(const cFaturamento& orig);
    virtual ~cFaturamento();
    
    void menu();
    void calcMaior(diasFaturamento vetor[], int qtde);
    void calcMenor(diasFaturamento vetor[], int qtde);
    
private:

};

#endif /* CFATURAMENTO_H */

