
// MFC-0420-1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC04201App: 
// �йش����ʵ�֣������ MFC-0420-1.cpp
//

class CMFC04201App : public CWinApp
{
public:
	CMFC04201App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC04201App theApp;