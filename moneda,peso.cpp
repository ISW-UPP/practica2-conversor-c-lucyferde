// moneda,peso.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    char opcion;
	float mxn, dolar, euro, yen, yuan, sol,ton,oz,lb, µg, Tg, peso, distancia, in, ft, cm, nm, ly;
    cout << "que deas hacer hoy?:[m][p][d]";
    cin >> opcion;
	
	switch (opcion)
	{
	case 'm': cout << "introduce la cantidad de pesos mexicanos:";
		cin >> mxn;
		dolar = mxn * 0.053;
		
		euro = mxn * 0.049;
	
		yen = mxn * 6.76;

		yuan = mxn * 0.36;
		
		sol = mxn * 0.20;
		cout << mxn << " a dolares"<<dolar << endl;
		cout << mxn << " a euros" << euro << endl;
		cout << mxn << " a yenes" << yen << endl;
		cout << mxn << " a yuan" << yuan << endl;
		cout << mxn << " a soles" << sol << endl;
		system("pause");
		break;
	case 'p': cout << "introduce el peso:";
		cin >> peso;
		ton = peso / 907.2;
		oz = peso * 35.274;
		lb = peso * 2.205;
		µg = peso * 1e+9;
		Tg = peso / 1e-9;
		cout << peso << "kilogramos a" << ton <<"tonelada"<< endl;
		cout << peso << "kilogramos a" << oz << "onzas" << endl;
		cout << peso << "kilogramos a" << lb << "libras" << endl;
		cout << peso << "kilogramos a" << µg << "microgramos" << endl;
		cout << peso << "kilogramos a" << Tg << "teragramos" << endl;
		system("pause");
		break;
	case 'd': cout << "introduce la distancia:";
		cin >> distancia;
		in = distancia * 39370;
		ft = distancia * 3281;
		cm = distancia * 100000;
		nm = distancia * 1e+12;
		ly = distancia / 9461000000000;
		cout << distancia << "kilometros a" << in << "pulgadas" << endl;
		cout << distancia << "kilometros a" << ft << "pies" << endl;
		cout << distancia << "kilometros a" << cm << "centimetros" << endl;
		cout << distancia << "kilometros a" << nm << "nanometros" << endl;
		cout << distancia << "kilometros a" << ly << "años luz" << endl;
		system("pause");
		break;
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
