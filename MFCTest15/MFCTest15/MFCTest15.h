
// MFCTest15.h : MFCTest15 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest15App:
// �йش����ʵ�֣������ MFCTest15.cpp
//

class CMFCTest15App : public CWinApp
{
public:
	CMFCTest15App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest15App theApp;
