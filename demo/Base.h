/*
 * @Author: zhxsheng 
 * @Date: 2017-12-19 14:37:11 
 * @Last Modified by: zhxsheng
 * @Last Modified time: 2017-12-19 14:39:59
 */

#ifndef Base_hpp
#define Base_hpp

#include <stdio.h>
#include <ostream>
#include <istream>
#include <iostream>
class Base{
public:
    Base(const Base& base);
    Base();
    void nonConstFunc(const int mCount);
	void constFunc() const;
	virtual void virtualFunction();
    virtual void virtualFunction1();
    virtual ~Base();
	void operator<< (std::ostream &os){
		os << "Base <<" << std::endl;
	};
	//friend std::ostream& operator<< (std::ostream &os, const Base &b){
		//os << "Base friend << " << b.mCount  << std::endl;
		//return os;
	//};
	Base& operator= (const Base &b);
	bool operator< (const Base &b) const{
		return true;
	}
    
public:
    int mCount;
//    int a;
//    char *mContent;
};

std::ostream& operator<< (std::ostream &os, const Base &b);


#endif /* Base_hpp */
