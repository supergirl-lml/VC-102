
// MFC-0413-4.h : MFC-0413-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04134App:
// �йش����ʵ�֣������ MFC-0413-4.cpp
//

class CMFC04134App : public CWinApp
{
public:
	CMFC04134App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04134App theApp;
