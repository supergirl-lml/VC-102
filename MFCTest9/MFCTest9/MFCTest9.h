
// MFCTest9.h : MFCTest9 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest9App:
// �йش����ʵ�֣������ MFCTest9.cpp
//

class CMFCTest9App : public CWinApp
{
public:
	CMFCTest9App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest9App theApp;
