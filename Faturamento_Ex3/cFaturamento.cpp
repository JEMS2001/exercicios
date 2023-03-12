/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFaturamento.cpp
 * Author: Arquivos
 * 
 * Created on 12 de Março de 2023, 13:26
 */

#include "cFaturamento.h"
#include <iostream>


using namespace std;
cFaturamento::cFaturamento() {
}

cFaturamento::cFaturamento(const cFaturamento& orig) {
}

cFaturamento::~cFaturamento() {
}

void cFaturamento :: menu(){
    
    int qtde;
    
    cout << "Digite a Quantidade de dias de Faturamento" << endl;
    cin >> qtde;
    
    diasFaturamento vetor[qtde];
    
    for (int i=0; i < qtde; i++){
        vetor[i].dia = i + 1;
        cout<< "Digite o faturamento do dia " << vetor[i].dia << ": " << endl;
        cin >> vetor[i].valor;
    }
    this->calcMaior(vetor, qtde);
    cout << endl;
    this->calcMenor(vetor, qtde);
}

void cFaturamento :: calcMaior(diasFaturamento vetor[], int qtde){
    int maiorDia = 0;
    float maior = 0;
    
    for (int i=0; i < qtde; i++){
        if(vetor[i].valor > maior){
           maior = vetor[i].valor;
           maiorDia = vetor[i].dia;
        }
    }
    cout << "o dia " << maiorDia << ",foi o dia de maior faturamento com o valor de " << maior << ".";
}

void cFaturamento :: calcMenor(diasFaturamento vetor[], int qtde){
    int menorDia = 0;
    float menor = 99999999999;
    
    for (int i=0; i < qtde; i++){
        
        if(vetor[i].valor == 0)
            menor = menor;
        else{
            if(vetor[i].valor < menor){
              menor = vetor[i].valor;
              menorDia = vetor[i].dia;
            }
        }
    }
    cout << "o dia " << menorDia << ",foi o dia de menor faturamento com o valor de " << menor << ".";
}