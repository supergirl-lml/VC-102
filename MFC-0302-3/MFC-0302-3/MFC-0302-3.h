
// MFC-0302-3.h : MFC-0302-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC03023App:
// �йش����ʵ�֣������ MFC-0302-3.cpp
//

class CMFC03023App : public CWinApp
{
public:
	CMFC03023App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC03023App theApp;