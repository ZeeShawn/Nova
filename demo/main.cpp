/*
 * @Author: zhxsheng 
 * @Date: 2017-12-19 13:48:10 
 * @Last Modified by: zhxsheng
 * @Last Modified time: 2017-12-19 13:48:41
 */
#include <iostream>
#include <sstream>
#include "Devired.h"
#include "BaseInstance.h"
#include "LessThan.h"
#include <unistd.h>

typedef void (*pFun)(void);

void vptrTest();
void memberTest();
void lenTest();
void constructTest(Base &b);
void instanceTest();
void constFuncTest();
void lessThanTest();

int main(int argc, const char * argv[]) {
	pid_t fpid = fork();
	if (fpid == 0)
	{
		std::cout <<"i am son" << std::endl;
	}
	else if (fpid > 0)
	{
		std::cout << "i am father" << std::endl;
	}
	else
	{
		std::cout <<"fork error" << std::endl;
	}

	std::cout << "end" << std::endl;
    return 0;
}

void lessThanTest(){
	Base b;
	LessThan<Base> lessThan(b);
	Base b2;
	if(lessThan(b2)){
		std::cout << "compare success" << std::endl;
	}
}

void constFuncTest(){
	Base b;
	Base *p = &b;
	const Base *ptr = &b;
	ptr->constFunc();
	//ptr->nonConstFunc(); error
	p->nonConstFunc(10);
	p->constFunc();
}

void vptrTest(){
	Base b;
    long *vptr = (long*)*(long *)&b;
    
    pFun p1 = (pFun)*(vptr);
    p1();
    pFun p2 = (pFun)*(vptr + 1);
    p2();
}

void memberTest(){
    Base b;
    long address = (long)&b;
    address += 8;
    
    int *pMember = (int *)address;
    std::cout << "b's member = " << *pMember << std::endl;
}

void lenTest(){
    Base *p = new Devired();
    std::cout << "size of p = " << sizeof(p) << std::endl;
    std::cout << "size of *p = " << sizeof(*p) << std::endl;
    std::cout << "size of Devired = " << sizeof(Devired) << std::endl;
    delete p;
}

void constructTest(Base &b){
	std::cout << "constructTest" << std::endl;
	Base temp = b;
	Base temp1;
	temp1 = b;
}

void instanceTest(){
	createInstance();
	BaseInstance *p = getInstance();
	std::cout << "sizeof BaseInstance = " << sizeof(BaseInstance) << std::endl;
	std::cout << "sizeof p = " << sizeof(p) << std::endl;
	std::cout << "sizeof *p = " <<  sizeof(*p) << std::endl;
	p->getData();
}
