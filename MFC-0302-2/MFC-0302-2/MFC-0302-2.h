
// MFC-0302-2.h : MFC-0302-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC03022App:
// �йش����ʵ�֣������ MFC-0302-2.cpp
//

class CMFC03022App : public CWinApp
{
public:
	CMFC03022App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC03022App theApp;
