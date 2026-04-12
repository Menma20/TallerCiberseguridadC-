#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    
    // --- Mostrar las reglas ---
    cout << "======== VALIDADOR DE SEGURIDAD DE CONTRASENAS ========" << endl;
    cout << "Para alcanzar el nivel FUERTE, tu contrasena debe:" << endl;
    cout << "1. Tener 8 caracteres o mas." << endl;
    cout << "2. Incluir al menos una letra mayuscula (A-Z)." << endl;
    cout << "3. Incluir al menos un numero (0-9)." << endl;
    cout << "4. Incluir al menos un caracter especial (! @ # $ % & * . : , ; - _)" << endl;
    cout << "====================================================================" << endl << endl;
    
    // Solicitar al usuario que ingrese la contraseña
    cout << "Ingrese una contrasena: ";
    getline(cin, password);
    
    // Variables booleanas para cada regla
    bool reglaLongitud = (password.length() >= 8);
    bool reglaMayuscula = false;
    bool reglaNumero = false;
    bool reglaEspecial = false;
    
    // Validaciones
    for (int i = 0; i < password.length(); i++) {
        char c = password[i];
        
        // Verificar letra mayúscula
        if (c >= 'A' && c <= 'Z') {
            reglaMayuscula = true;
        }
        // Verificar número
        else if (c >= '0' && c <= '9') {
            reglaNumero = true;
        }
        // Verificar carácter especial
        else if (c == '!' || c == '@' || c == '#' || c == '$' || 
                 c == '%' || c == '&' || c == '*'|| c == ','|| c == '.'
                 || c == ';'|| c == ':'|| c == '-'|| c == '_') {
            reglaEspecial = true;
        }
    }
    
    // Puntaje
    int puntaje = reglaLongitud + reglaMayuscula + reglaNumero + reglaEspecial;
    
    // Seguridad de la contraseña
    cout << "\nNivel: ";
    if (puntaje <= 2) {
        cout << "DÉBIL" << endl;
    } else if (puntaje == 3) {
        cout << "MEDIA" << endl;
    } else if (puntaje == 4) {
        cout << "FUERTE" << endl;
    }
    
    return 0;
}