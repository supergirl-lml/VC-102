
// MFC-0414-1.h : MFC-0414-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04141App:
// �йش����ʵ�֣������ MFC-0414-1.cpp
//

class CMFC04141App : public CWinApp
{
public:
	CMFC04141App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04141App theApp;
