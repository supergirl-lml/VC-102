
// MFC-0420-4.h : MFC-0420-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04204App:
// �йش����ʵ�֣������ MFC-0420-4.cpp
//

class CMFC04204App : public CWinApp
{
public:
	CMFC04204App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04204App theApp;
