
// MFC-0504-3.h : MFC-0504-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC05043App:
// �йش����ʵ�֣������ MFC-0504-3.cpp
//

class CMFC05043App : public CWinApp
{
public:
	CMFC05043App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC05043App theApp;
