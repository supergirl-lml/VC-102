
// MFC-0504-1.h : MFC-0504-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC05041App:
// �йش����ʵ�֣������ MFC-0504-1.cpp
//

class CMFC05041App : public CWinApp
{
public:
	CMFC05041App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC05041App theApp;
