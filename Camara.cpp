/*"	Realizar un ejercicio en donde se muestre un menú que diga ingreso a la cámara detectora 
del segundo síntoma del covid-19.*/

#include <iostream>
#include <math.h>
using namespace std;
main ()
{
	double temperatura ;
	cout<<" CAMARA DETECTORA DEL SEGUNDO SINTOMA AL COVID-19 "<<endl<<endl;
	cout<<" recuerda que si tienes una temperatura mayor a 36 grados c es momento de buscar ayuda profesional  "<<endl<<endl; 
	cout <<"digite su temperatura actual por favor: "<<endl;
	cin>>temperatura;
	if(temperatura>36)
{
	cout<<" sintoma de alerta necesitas ayuda de un doctor "<<endl;
	cout<<" recuerda primero pedir ayuda a la linea de atencion #123-4 ";
	}	
	else
	{
		cout<<" aun estas a tiempo para no contagiarte "<<endl;
		cout<<" recuerda lavarte las manos  cada 2 horas ";
	}
return 0;	
}
