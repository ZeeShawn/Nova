//
//  Devired.hpp
//  CPlus
//
//  Created by zhxsheng on 2017/6/25.
//  Copyright © 2017年 zhxsheng. All rights reserved.
//

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
