#ifndef SINGLETON_H__
#define SINGLETON_H__

#include <iostream>

using namespace std;

class CSingleton {
	private:
		CSingleton();
		//~CSingleton() {}
		CSingleton(const CSingleton&);
		CSingleton& operator=(const CSingleton&);
	public:
		static CSingleton* getInstance();
		void draw();
	private:
		static CSingleton* m_pInstance;
};
#endif // 
