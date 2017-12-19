/*
 * @Author: zhxsheng 
 * @Date: 2017-12-19 14:36:33 
 * @Last Modified by:   zhxsheng 
 * @Last Modified time: 2017-12-19 14:36:33 
 */
#include <functional>
#include <vector>
#include <iostream>
using namespace std;
template <typename elemType, typename Comp = less<elemType> >
class LessThan {
public:
	LessThan(const elemType &val) :_val(val){}
	bool operator()(const elemType &val) const{
		return Comp()(val, _val);
	}
private:
	elemType _val;
};


