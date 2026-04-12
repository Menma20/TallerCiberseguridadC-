#include <iostream>
#include <string>

using namespace std;

int main() {
    
    const string USUARIO_CORRECTO = "admin";
    const string PASS_CORRECTO = "Segura123!";
    
    
    const int TOTAL_INTENTOS = 5;
    
    
    string usuarios[TOTAL_INTENTOS];
    bool exitoso[TOTAL_INTENTOS];
    
    // Contadores para el reporte
    int fallidos = 0;
    int exitosos = 0;
    
    cout << "=== SISTEMA DE MONITOREO DE ACCESOS ===" << endl << endl;
    
    
    for (int i = 0; i < TOTAL_INTENTOS; i++) {
        string password;
        
        cout << "--- Registro #" << (i + 1) << " ---" << endl;
        
        cout << "Usuario: ";
        cin >> usuarios[i]; 
        
        cout << "Contrasena: ";
        cin >> password;    
        
        
        if (usuarios[i] == USUARIO_CORRECTO && password == PASS_CORRECTO) {
            exitoso[i] = true;
            exitosos++;
            cout << "-> Acceso concedido" << endl << endl;
        } else {
            exitoso[i] = false;
            fallidos++;
            cout << "-> Acceso denegado" << endl << endl;
        }
    }
    
    
    cout << "========== REPORTE DE SEGURIDAD ==========" << endl;
    
    for (int i = 0; i < TOTAL_INTENTOS; i++) {
        cout << "Usuario: " << usuarios[i] << " \t| Estado: ";
        
        if (exitoso[i]) {
            cout << "OK" << endl;
        } else {
            cout << "FALLIDO" << endl;
        }
    }
    
    
    float tasaFallo = ((float)fallidos / TOTAL_INTENTOS) * 100;
    
    cout << "\nIntentos exitosos: " << exitosos << "/" << TOTAL_INTENTOS << endl;
    cout << "Tasa de fallo: " << tasaFallo << "%" << endl;
    
    
    if (tasaFallo > 60.0) {
        cout << "*** ALERTA: Tasa de fallo alta - posible ataque ***" << endl;
    }
    
    return 0;
}