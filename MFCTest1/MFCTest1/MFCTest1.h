
// MFCTest1.h : MFCTest1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest1App:
// �йش����ʵ�֣������ MFCTest1.cpp
//

class CMFCTest1App : public CWinApp
{
public:
	CMFCTest1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest1App theApp;
