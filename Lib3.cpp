// Lib3.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Lib3.h"
#define PI 3.1415927

// ���ǵ���������һ��ʾ��
LIB3_API int nLib3=0;

// ���ǵ���������һ��ʾ����
LIB3_API int fnLib3(void)
{
    return 42;
}

LIB3_API int factorial(int n)
{
	int result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}


// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Lib3.h
CLib3::CLib3()
{
    return;
}

float FAC::convert(float deg)
{
	float rad = PI* deg / 180;
	return rad;
}