
// MFCTest7.h : MFCTest7 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest7App:
// �йش����ʵ�֣������ MFCTest7.cpp
//

class CMFCTest7App : public CWinApp
{
public:
	CMFCTest7App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest7App theApp;
