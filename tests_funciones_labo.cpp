#include <iostream>
#include "funciones_labo.cpp"

using namespace std;

/**
 * 
 * bool esperado: el valor esperado de retorno de la función
 * bool obtenido: el valor obtenido luego de ejecutar la función
 * string nombre: el nombre de la función que estamos probando
 * int n: el número del test que hacemos de la misma función
 * 
 */
void test(bool esperado, bool obtenido, string nombre, int n) {
    if (esperado == obtenido) {
        cout << "✅ " << nombre << " test " << n << endl;
    } else {
        cout << "❌ " << nombre << " test " << n;
        cout << " → esperado: " << (esperado ? "true" : "false")
             << ", obtenido: " << (obtenido ? "true" : "false") << endl;
    }
}


// Este archivo no deberías modificarlo, solo compilarlo y correrlo. 
int main() {

    cout << "\n==== TESTS DE es_valor_valido ====\n" << endl;
    test(true,  es_valor_valido(50),  "es_valor_valido", 1);
    test(true,  es_valor_valido(10),  "es_valor_valido", 2);  // límite inferior
    test(true,  es_valor_valido(100), "es_valor_valido", 3);  // límite superior
    test(false, es_valor_valido(9),   "es_valor_valido", 4);  // fuera de rango
    test(false, es_valor_valido(150), "es_valor_valido", 5);


    cout << "\n==== TESTS DE es_serie_aprobada ====\n" << endl;
    test(true,  es_serie_aprobada(8, 10),  "es_serie_aprobada", 1);   // 80%
    test(true,  es_serie_aprobada(9, 10),  "es_serie_aprobada", 2);   // 90%
    test(false, es_serie_aprobada(7, 10),  "es_serie_aprobada", 3);   // 70%
    test(false, es_serie_aprobada(0, 0),   "es_serie_aprobada", 4);   // división por 0
    test(true,  es_serie_aprobada(4, 5),   "es_serie_aprobada", 5);   // 80% exacto

    cout << "\n==== TESTS DE es_serie_inestable ====\n" << endl;
    test(false, es_serie_inestable(50, 30), "es_serie_inestable", 1);  // dif = 20
    test(true,  es_serie_inestable(70, 30), "es_serie_inestable", 2);  // dif = 40
    test(false, es_serie_inestable(100, 71),"es_serie_inestable", 3);  // dif = 29
    test(false, es_serie_inestable(100, 70),"es_serie_inestable", 4);  // dif = 30 exacto
    test(true,  es_serie_inestable(100, 60),"es_serie_inestable", 5);  // dif = 40

    cout << "\n============================================\n" << endl;
    return 0;
}