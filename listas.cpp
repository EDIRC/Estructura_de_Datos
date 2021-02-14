#include <iostream> 
#include <list>  // Biblioteca para listas
#include <iterator> 
using namespace std; 

//Función para imprimir los elementos de una lista 
void imprimelista(list <int> g) 
{ 
	list <int> :: iterator it; 
	for(it = g.begin(); it != g.end(); ++it) 
		cout << '\t' << *it; 
	cout << '\n'; 
} 

int main() 
{ 

	list <int> lista1, lista2; // Crea 2 listas


	for (int i = 0; i < 5; ++i) 
	{ 
		lista1.push_back(i * 2); // Insertamos al final (push_back)
		lista2.push_front(i * 3); // Insertamos al principio (push_front)
	} 
	cout << "\nLista 1 es : "; 
	imprimelista(lista1); 

	cout << "\nLista 2 es : "; 
	imprimelista(lista2); 

	cout << "\nlista1.front() : " << lista1.front(); 
	cout << "\nlista1.back() : " << lista1.back(); 

	cout << "\n\nlista2.front() : " << lista2.front(); 
	cout << "\nlista2.back() : " << lista2.back(); 

	cout << "\n\nlista1.pop_front() : "; 
	lista1.pop_front(); 
	imprimelista(lista1); 

	cout << "\nlista2.pop_back() : "; 
	lista2.pop_back(); 
	imprimelista(lista2); 

	cout << "\nlista1.reverse() : "; 
	lista1.reverse(); 
	imprimelista(lista1); 

	cout << "\nlista2.sort(): "; 
	lista2.sort(); 
	imprimelista(lista2); 

	return 0; 

} 
