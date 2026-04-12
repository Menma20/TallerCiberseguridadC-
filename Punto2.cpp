#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Definir credenciales correctas 
    const string USUARIO_CORRECTO = "Colombia";
    const string PASS_CORRECTO = "Followup1!";
    
    // Variables 
    string usuario;
    string password;
    
    // Variables de control
    int intentos = 0;
    bool acceso = false;
    const int MAX_INTENTOS = 3;
    
    cout << "=== PORTAL DE ACCESO SEGURO ===" << endl << endl;
    
    // 2. Ciclo while
    while (intentos < MAX_INTENTOS && !acceso) {
        cout << "--- Intento " << (intentos + 1) << " de " << MAX_INTENTOS << " ---" << endl;
        
        cout << "Usuario: ";
        getline(cin, usuario);
        
        cout << "Contraseña: ";
        getline(cin, password);
        
        // 3. Verificar credenciales
        if (usuario == USUARIO_CORRECTO && password == PASS_CORRECTO) {
            acceso = true; 
            cout << "¡Acceso concedido!" << endl;
        } else {
            intentos++; 
            
            // Credenciales incorrectas
            if (intentos < MAX_INTENTOS) {
                cout << "Credenciales incorrectas." << endl << endl;
            }
        }
    }
    
    // 4. Cuenta bloqueada
    if (!acceso) {
        cout << "CUENTA BLOQUEADA" << endl;
    }
    
    return 0;
}