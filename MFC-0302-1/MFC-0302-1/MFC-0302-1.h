
// MFC-0302-1.h : MFC-0302-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC03021App:
// �йش����ʵ�֣������ MFC-0302-1.cpp
//

class CMFC03021App : public CWinApp
{
public:
	CMFC03021App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC03021App theApp;
