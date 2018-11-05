#include "singleton.h"

CSingleton::CSingleton()
{
	cout << "create" << endl;
}

CSingleton::CSingleton(const CSingleton&)
{
}

//CSingleton& CSingleton::operator=(const CSingleton&)
//{
//}

CSingleton* CSingleton::m_pInstance = NULL;

CSingleton* CSingleton::getInstance()
{
	if (m_pInstance == NULL) {
		m_pInstance = new CSingleton();
		return m_pInstance;
	}
}

void CSingleton::draw()
{
	cout << "aaaaaaaa" << endl;
}