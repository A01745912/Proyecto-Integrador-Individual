#ifndef USUARIO_C
#define USUARIO_C

#include <iostream>
#include <string>
using namespace std;

class Usuario{
    private: 
        string nombre;
        string correo_elect;
        string telefono;
        bool pago_tarjeta;
    
    public: 
        Usuario(){
            nombre = "XXXX";
            correo_elect = "XXXX@gmail.com";
            telefono = "55XXXXXX";
            pago_tarjeta = false;
        }
        void ingresar_datos (){
            string nom {};
            string corr {};
            string tel {};
            cout << "\nInserte su nombre: "; getline(cin,nom);
            cout << "Inserte su correo electronico: "; cin >> corr;
            cout << "Inserte su telefono: "; cin >> tel;
            cin.ignore(32767,'\n');

            nombre = nom;
            correo_elect = corr;
            telefono = tel;
        }

        void imprimir_datos (){
            cout << "\nDatos del usuario. \n" << endl; 
            cout << "Nombre del usuario: " << nombre << endl; 
            cout << "Correo electronico: " << correo_elect << endl;
            cout << "Telefono: " << telefono << endl;
            cin.ignore(32767,'\n');
        }

        void pago_con_tarjeta (){
            pago_tarjeta = true;
            cout << "\nSe hara el pago con tarjeta." << endl;
        }
}; //Clase usuario. 

#endif
