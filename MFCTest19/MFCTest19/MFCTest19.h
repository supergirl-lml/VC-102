
// MFCTest19.h : MFCTest19 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCTest19App:
// �йش����ʵ�֣������ MFCTest19.cpp
//

class CMFCTest19App : public CWinApp
{
public:
	CMFCTest19App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTest19App theApp;
