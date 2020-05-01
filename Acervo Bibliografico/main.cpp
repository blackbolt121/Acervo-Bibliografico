#include <iostream>
#include "menu.h"

typedef List<libro> acervo;
using std::cout;
using std::endl;
int main() 
{
	acervo list;
	std::cout << list.size() << std::endl;
	menu::menu(list, "ruta.txt");
	
	return 0;
}
