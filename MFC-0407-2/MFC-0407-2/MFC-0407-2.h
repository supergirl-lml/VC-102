
// MFC-0407-2.h : MFC-0407-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC04072App:
// �йش����ʵ�֣������ MFC-0407-2.cpp
//

class CMFC04072App : public CWinApp
{
public:
	CMFC04072App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC04072App theApp;
