
// MFC-0407-1.h : MFC-0407-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04071App:
// �йش����ʵ�֣������ MFC-0407-1.cpp
//

class CMFC04071App : public CWinApp
{
public:
	CMFC04071App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04071App theApp;
