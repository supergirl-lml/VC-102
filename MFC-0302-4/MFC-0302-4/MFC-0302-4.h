
// MFC-0302-4.h : MFC-0302-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC03024App:
// �йش����ʵ�֣������ MFC-0302-4.cpp
//

class CMFC03024App : public CWinApp
{
public:
	CMFC03024App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC03024App theApp;
