
// MFC-0421-2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC04212App: 
// �йش����ʵ�֣������ MFC-0421-2.cpp
//

class CMFC04212App : public CWinApp
{
public:
	CMFC04212App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC04212App theApp;