
// MFCTest3.h : MFCTest3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest3App:
// �йش����ʵ�֣������ MFCTest3.cpp
//

class CMFCTest3App : public CWinApp
{
public:
	CMFCTest3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest3App theApp;
