
// MFC-0420-5.h : MFC-0420-5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04205App:
// �йش����ʵ�֣������ MFC-0420-5.cpp
//

class CMFC04205App : public CWinApp
{
public:
	CMFC04205App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04205App theApp;
