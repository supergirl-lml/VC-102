
// MFC-0413-1.h : MFC-0413-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04131App:
// �йش����ʵ�֣������ MFC-0413-1.cpp
//

class CMFC04131App : public CWinApp
{
public:
	CMFC04131App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04131App theApp;
