
// MFC-0504-2.h : MFC-0504-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC05042App:
// �йش����ʵ�֣������ MFC-0504-2.cpp
//

class CMFC05042App : public CWinApp
{
public:
	CMFC05042App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC05042App theApp;
