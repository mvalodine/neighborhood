#pragma once
#include <string>
#include "Animal.h"

Animal::Animal(string new_name)
{
	name = new_name; // what's in common of all these different kinds of characters? +
}
 
string Animal::toString() {
	return(name);
}