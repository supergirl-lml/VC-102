
// MFCTest18.h : MFCTest18 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest18App:
// �йش����ʵ�֣������ MFCTest18.cpp
//

class CMFCTest18App : public CWinApp
{
public:
	CMFCTest18App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest18App theApp;
