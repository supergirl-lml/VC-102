
// MFCTest20.h : MFCTest20 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest20App:
// �йش����ʵ�֣������ MFCTest20.cpp
//

class CMFCTest20App : public CWinApp
{
public:
	CMFCTest20App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest20App theApp;
