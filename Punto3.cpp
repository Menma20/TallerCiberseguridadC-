#include <iostream>
#include <string>

using namespace std;

int main() {
    string mensaje;
    int desplazamiento;

    // 1. Solicitar datos
    cout << "Ingrese el mensaje: ";
    cin >> mensaje; 
    
    cout << "Ingrese el desplazamiento: ";
    cin >> desplazamiento;

    // 2. Cifrado de caracteres
    for (int i = 0; i < mensaje.length(); i++) {
        char c = mensaje[i];

        // Letras minúsculas
        if (c >= 'a' && c <= 'z') {
            mensaje[i] = (c - 'a' + desplazamiento) % 26 + 'a';
        } 
        // Letras mayúsculas
        else if (c >= 'A' && c <= 'Z') {
            mensaje[i] = (c - 'A' + desplazamiento) % 26 + 'A';
        }
        
    }

    // 3. Imprimir resultado
    cout << "Mensaje cifrado: " << mensaje << endl;

    return 0;
}