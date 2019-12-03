#include <iostream>
#include "Class2.h"

Class2::Class2(){
	std::cout<< "Class 2 initialized" <<std::endl;
}

void Class2::printInfo(){
	std::cout<< "Name: "<< name <<std::endl;
}
