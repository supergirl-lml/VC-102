
// MFC-0225-2.h : MFC-0225-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC02252App:
// �йش����ʵ�֣������ MFC-0225-2.cpp
//

class CMFC02252App : public CWinApp
{
public:
	CMFC02252App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC02252App theApp;
