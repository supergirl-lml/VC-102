
// MFC-0225-1.h : MFC-0225-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC02251App:
// �йش����ʵ�֣������ MFC-0225-1.cpp
//

class CMFC02251App : public CWinApp
{
public:
	CMFC02251App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC02251App theApp;
