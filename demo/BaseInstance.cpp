#include "BaseInstance.h"
#include <iostream>
class Instance : public BaseInstance{
public :
	virtual void getData();
private:
	int data;
};

BaseInstance::~BaseInstance(){

}

void Instance::getData(){
	data = 1024;
	std::cout << "sizeof Instance = " << sizeof(Instance) << std::endl;
}


Instance *instance;

void createInstance(){
	instance = new Instance();
	std::cout << "sizeof *instance" << sizeof(*instance) << std::endl;
}

BaseInstance* getInstance(){
	return instance;
}

