/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arquivos
 *
 * Created on 4 de Março de 2023, 21:18
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n1 = 0, n2 = 1, n3 = 0, n4;
    
    cout << "Digite o número que deseja conferir: " << endl;
    cin >> n4;
    
    while(n4 > n3){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    if(n4 == 0)
        cout << "O número 0 pertence a sequência";
    else
        if(n4 == n3)
            cout << "O número " << n4 << " pertence a sequência";      
        else
            cout << "O número não pertence a sequência";
    
    return 0;
}

