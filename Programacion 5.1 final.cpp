//Miguel A Arroyo

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int quantity;     //cantidad de articulos comprados
float itemPrice;   //precio de cada articulo
float totalBill;   //total de la cuenta

cout <<setprecision(2) <<fixed <<showpoint; //output formateado

cout <<"Indique la cantidad de articulos comprados:" <<endl; //Indicamos en el monitor al operador colocar la cantidad de articulos comprados

cin >> quantity; // Colocando Cin se espera la cantidad del operador y al ser INT es un numero entero

cout <<"Indique el precio de cada articulo:" <<endl; //Indicamos en el monitor el precio de cada articulo

cin >> itemPrice; //Se espera la contestacion del operador del programa para que coloque el precio de cada articulo

totalBill = quantity*itemPrice; //Se realiza las variables para responder y realizar la ecuacion hacia "totalBill"

cout << "El total de la cuenta es: $"<<totalBill<< endl; //Finalmente, mostramos en el monitor la cantidad total.
return 0;
}