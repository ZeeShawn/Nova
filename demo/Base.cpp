//
//  Base.cpp
//  CPlus
//
//  Created by zhxsheng on 2017/6/25.
//  Copyright © 2017年 zhxsheng. All rights reserved.
//

#include "Base.h"
#include <iostream>

Base::Base(){
    mCount = 10086;
    std::cout << "base" << std::endl;
}

Base::Base(const Base &base){
    std::cout << "copy construct base" << std::endl;
}

void Base::virtualFunction(){
    std::cout << "base virtual function" << std::endl;
}
void Base::virtualFunction1(){
    std::cout << "base virtual function1" << std::endl;
}

Base& Base::operator= (const Base &b){
	std::cout << "operator = " << std::endl;
	return *this;
}
Base::~Base(){
    std::cout << "~base" << std::endl;
}

void Base::nonConstFunc(const int mCount){
	std::cout << "this->mCount=" << this->mCount << std::endl;
	std::cout << "mCount =" << mCount << std::endl;
	this->mCount = mCount;
	std::cout << "non const func" << std::endl;
}

void Base::constFunc() const{
	std::cout << "const func" << std::endl;
}

std::ostream& operator<< (std::ostream &os, const Base &b){
	os << "Base friend << " << b.mCount  << std::endl;
	return os;
}

