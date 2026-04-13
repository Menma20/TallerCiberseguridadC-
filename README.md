DOCUMENTO DE ESPECIFICACIONES TÉCNICAS Y DESPLIEGUE
PROYECTO: Suite de Herramientas de Ciberseguridad en C++

DESCRIPCIÓN GENERAL
El presente repositorio contiene la implementación lógica de cuatro módulos fundamentales de seguridad de la información desarrollados en C++. El sistema aborda la validación de credenciales, el control de acceso, la ofuscación de datos y el monitoreo de eventos de seguridad, simulando las capas de protección de una arquitectura de software moderna.

ARQUITECTURA DE MÓDULOS

Módulo 1: Validador de Robustez (parte1.cpp)
Implementa algoritmos de validación para contraseñas. Evalúa la entropía de la clave basándose en requerimientos de longitud mínima y diversidad algorítmica (uso combinado de mayúsculas, valores numéricos y caracteres especiales). Objetivo: Mitigación de vulnerabilidades por contraseñas débiles y ataques de diccionario.

Módulo 2: Autenticación y Bloqueo (parte2.cpp)
Sistema de validación de credenciales con mecanismo de defensa activo. Incorpora un umbral de bloqueo automático tras registrar tres intentos de acceso fallidos consecutivos. Objetivo: Prevención de intrusiones automatizadas y ataques de fuerza bruta.

Módulo 3: Motor Criptográfico (parte3.cpp)
Implementa la ofuscación de texto plano mediante un algoritmo de sustitución (Cifrado César). Utiliza manipulación directa de valores ASCII y aritmética modular para el desplazamiento cíclico de caracteres. Objetivo: Protección de la confidencialidad de los datos en tránsito.

Módulo 4: Auditoría y Monitoreo (parte4.cpp)
Sistema de registro de accesos (logs). Emplea estructuras de arreglos paralelos en memoria para almacenar el historial de transacciones. Incluye un módulo de análisis estadístico que calcula la tasa de fallos e imprime alertas automatizadas si el porcentaje de intentos denegados supera el umbral de seguridad (60%). Objetivo: Detección temprana de intrusiones silenciosas.

