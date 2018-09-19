/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on 19 de septiembre de 2018, 18:51
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>

using namespace std;
      
/*
 * 
 */
int main(int argc, char** argv) {
    
   float a, b, c, d, m, n;
   
    cout << "Defineix les 3 variables " << endl;
    cout << "Dona valor a A: " << endl;
    cin >> a;
    cout << "Dona valor a B: " << endl;
    cin >> b;
    cout << "Dona valor a C: " << endl;
    cin >> c;
    b = b*-1;
    d = (b*b)-4*a*c;
    d = sqrt(d);
          
    m = (b+d)/(2*a);
    n = (b-d)/(2*a);        
    cout << "Valor resultat 1(m): " << endl;
    cout << m << endl;
    cout <<"valor resultat 2 (n): " << endl;
    cout << n;
   return 0;
           
       
}

