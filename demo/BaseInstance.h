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

