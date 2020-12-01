#include "usuario.h"
#include "compra.h"
#include "sucursal.h"
#include "destinatario.h"
#include "producto.h"
#include "marca.h"

#include <iostream>
#include <string>
using namespace std;

//Aplicacion con la clase Sucursal de Ricardo Antonio Cervantes Martínez A01745912. 

int main(){
    Usuario u1;
    Producto p1;
    Marca m1;
    Compra comp1;
    Sucursal s1;

    string afirmacion = "Si";

    while ((afirmacion == "Si")||(afirmacion=="si")){
        cout << "¡Bienvenido a la tienda en linea!" << endl;
        cout << "\nRegistrese para poder elegir su compra." << endl;
        cout << "Pulse enter para continuar." << endl;
        cin.ignore(32767,'\n');

        cout << "\n¿Quiere registrar sus datos?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            cin.ignore(32767,'\n');
            u1.ingresar_datos();
            cout << "\n¿Quiere corroborar sus datos?"; cin >> afirmacion;
            
            if ((afirmacion == "Si")||(afirmacion=="si")){
                comp1.desplegar_usuario(u1).imprimir_datos();
            }
        }
        
        cout << "\nIngrese los datos de la marca." << endl;
        cout << "\nPulse enter para continuar." << endl;
        cin.ignore(32767,'\n');
        m1.datos_mercado();
        m1.desplegar_datos();

        cout << "\nIngrese los datos de la sucursal." << endl;
        cout << "\nPulse enter para continuar." << endl;
        cin.ignore(32767,'\n');
        s1.seleccionar_sucursal();

        cout << "\nPresione enter para continuar." << endl;

        cout << "\n¿Esta disponivble el producto?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            s1.existencia_producto();
        }

        cout << "\n¿Quiere corroborar sus datos?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            m1.desplegar_sucursal(s1).desplegar_datos();
        }


        cout << "\nAhora ingrese los datos del producto a comprar." << endl;
        p1.insertar_datos();
        p1.insertar_cantidad();
        p1.si_garantia();

        cout << "\n¿Quiere corroborar sus datos?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            m1.desplegar_producto(p1).desplegar_datos();
        }

        cout << "\n¿Seguro quiere comprar el producto?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            comp1.confirmar_producto();
            
            cout << "\nProceda a pagar." << endl;
            cout << "\n¿Quiere pagar con tarjeta?"; cin >> afirmacion;
            if ((afirmacion == "Si")||(afirmacion=="si")){
                u1.pago_con_tarjeta();
            }
            comp1.datos_compra(1);
        }
        else{
            comp1.descartar_producto();
        }

        cout << "\n¿Quiere seguir comprando?"; cin >> afirmacion;
    }  

}