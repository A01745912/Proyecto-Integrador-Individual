#include "usuario.h"
#include "destinatario.h"
#include "producto.h"

#ifndef COMPRA_C
#define COMPRA_C

#include <iostream>
#include <string>
using namespace std;

class Compra {
    private: 
        Usuario comprador {};
        Destinatario destinatario {};
        Producto producto {};
        int numero_compra;
        bool producto_confirmar;
    
    public: 
        Compra (){
            comprador = Usuario {};
            destinatario = Destinatario {};
            producto = Producto {};
            numero_compra = 00000;
            producto_confirmar = false;
        }
        Usuario desplegar_usuario (Usuario usuario){
            return usuario;
        }

        Producto desplegar_producto (Producto pro){
            return pro;
        }

        Destinatario desplegar_destinatario (Destinatario des){
            return des;
        }

        void datos_compra (int n){   
            numero_compra = numero_compra + n;
            cout << "Numero de compra: " << to_string(numero_compra) << endl;
        }

        void confirmar_producto(){
            producto_confirmar = true;
            cout << "\n¿El producto esta confirmado?: " << to_string(producto_confirmar) << endl;
        }
        void descartar_producto(){
            producto_confirmar = false;
            cout << "\n¿El producto esta confirmado?: " << to_string(producto_confirmar) << endl;
        }
};

#endif COMPRA_C