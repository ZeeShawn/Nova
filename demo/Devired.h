/*
 * @Author: zhxsheng 
 * @Date: 2017-12-19 14:37:25 
 * @Last Modified by:   zhxsheng 
 * @Last Modified time: 2017-12-19 14:37:25 
 */

#ifndef Devired_hpp
#define Devired_hpp

#include <stdio.h>
#include "Base.h"

class Devired:public Base{
public:
//    void virtualFunction();
    virtual void function();
private:
	int member;
	float m_float;
};

#endif /* Devired_hpp */
