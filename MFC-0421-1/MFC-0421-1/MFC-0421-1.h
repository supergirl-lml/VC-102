
// MFC-0421-1.h : MFC-0421-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04211App:
// �йش����ʵ�֣������ MFC-0421-1.cpp
//

class CMFC04211App : public CWinApp
{
public:
	CMFC04211App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04211App theApp;
