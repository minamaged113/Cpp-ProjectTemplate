#include <iostream>
#include "Class1.h"

Class1::Class1(){
	std::cout<< "Class1 called" <<std::endl;
}

void Class1::printInfo(){
	std::cout<< "name: " << name <<std::endl;
}
