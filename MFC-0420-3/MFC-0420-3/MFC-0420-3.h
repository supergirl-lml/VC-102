
// MFC-0420-3.h : MFC-0420-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04203App:
// �йش����ʵ�֣������ MFC-0420-3.cpp
//

class CMFC04203App : public CWinApp
{
public:
	CMFC04203App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04203App theApp;
