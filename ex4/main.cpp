/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arquivos
 *
 * Created on 12 de Março de 2023, 15:26
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float SP=67836.43, RJ=36678.66, MG=29229.88, ES=27165.48, Outros=19849.53;
    float valorTotal, porc_SP, porc_RJ, porc_MG, porc_ES, porc_Outros;
    
    valorTotal = SP + RJ + MG + ES + Outros;
    
    porc_SP = (SP * 100)/valorTotal;
    porc_RJ = (RJ * 100)/valorTotal;
    porc_MG = (MG * 100)/valorTotal;
    porc_ES = (ES * 100)/valorTotal;
    porc_Outros = (Outros * 100)/valorTotal;
    
    cout << "O percentual do Estado de SP foi de: " << porc_SP <<"%"<< endl;
    cout << "O percentual do Estado do RJ foi de: " << porc_RJ <<"%"<< endl;
    cout << "O percentual do Estado de MG foi de: " << porc_MG <<"%"<< endl;
    cout << "O percentual do Estado do ES foi de: " << porc_ES <<"%"<< endl;
    cout << "O percentual dos outros Estados foi de: " << porc_Outros <<"%"<< endl;
    
    return 0;
}

