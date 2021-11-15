//
//  main.cpp
//  NumerosRomanos
//
//  Created by Vicente Fernando Vargas Grullon on 13/9/21.
//
// Ejercicio 9: Cambiar un número entero con el mismo valor pero en romanos.
/*
 M = 1000
 D = 500
 C = 100
 L = 50
 X = 10
 V = 5
 I = 1
 */

#include <iostream>
using namespace std;

int main()
{
    int numero, unidades, decenas, centenas, millares;
    
    cout << "Ingrese un numero: "; cin >> numero;
    // Por ejemplo ingresa 2718
    
    unidades = numero % 10; numero /= 10; // unidades = 8, numero = 271
    decenas = numero % 10; numero /= 10; // decenas = 1, numero = 27
    centenas = numero % 10; numero /= 10;// centenas = 7, numero = 2
    millares = numero % 10; numero /= 10;// millares = 2, numero = 0
    
    switch(millares)
    {
        case 1: cout << "M"; break;
        case 2: cout << "MM"; break;
        case 3: cout << "MMM"; break;
    }
    switch(centenas)
    {
        case 1: cout << "C"; break;
        case 2: cout << "CC"; break;
        case 3: cout << "CCC"; break;
        case 4: cout << "CD"; break;
        case 5: cout << "D"; break;
        case 6: cout << "DC"; break;
        case 7: cout << "DCC"; break;
        case 8: cout << "DCCC"; break;
        case 9: cout << "CM"; break;
    }
    switch(decenas)
    {
        case 1: cout << "X"; break;
        case 2: cout << "XX"; break;
        case 3: cout << "XXX"; break;
        case 4: cout << "XL"; break;
        case 5: cout << "L"; break;
        case 6: cout << "LX"; break;
        case 7: cout << "LXX"; break;
        case 8: cout << "LXXX"; break;
        case 9: cout << "XC"; break;
    }
    switch(unidades)
    {
        case 1: cout << "I" << endl; break;
        case 2: cout << "II" << endl; break;
        case 3: cout << "III" << endl; break;
        case 4: cout << "IV" << endl; break;
        case 5: cout << "V" << endl; break;
        case 6: cout << "VI" << endl; break;
        case 7: cout << "VII" << endl; break;
        case 8: cout << "VIII" << endl; break;
        case 9: cout << "IX" << endl; break;
    }
    
    return 0;
}
