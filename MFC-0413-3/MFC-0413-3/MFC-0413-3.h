
// MFC-0413-3.h : MFC-0413-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04133App:
// �йش����ʵ�֣������ MFC-0413-3.cpp
//

class CMFC04133App : public CWinApp
{
public:
	CMFC04133App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04133App theApp;
