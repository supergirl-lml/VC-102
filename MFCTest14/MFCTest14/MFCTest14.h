
// MFCTest14.h : MFCTest14 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest14App:
// �йش����ʵ�֣������ MFCTest14.cpp
//

class CMFCTest14App : public CWinApp
{
public:
	CMFCTest14App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest14App theApp;
