
// MFCTest17.h : MFCTest17 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest17App:
// �йش����ʵ�֣������ MFCTest17.cpp
//

class CMFCTest17App : public CWinApp
{
public:
	CMFCTest17App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest17App theApp;
