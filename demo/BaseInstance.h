/*
 * @Author: zhxsheng 
 * @Date: 2017-12-19 14:37:01 
 * @Last Modified by: zhxsheng
 * @Last Modified time: 2017-12-19 14:39:16
 */
#ifndef BaseInstance_h
#define BaseInstance_h

class BaseInstance {
public:
	virtual void getData() = 0;
	virtual ~BaseInstance();	
};


extern void createInstance();
extern BaseInstance* getInstance();
//extern void destoryInstance();

#endif

