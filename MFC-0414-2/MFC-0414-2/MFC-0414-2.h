
// MFC-0414-2.h : MFC-0414-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04142App:
// �йش����ʵ�֣������ MFC-0414-2.cpp
//

class CMFC04142App : public CWinApp
{
public:
	CMFC04142App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04142App theApp;
