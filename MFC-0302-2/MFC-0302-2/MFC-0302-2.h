
// MFC-0302-2.h : MFC-0302-2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC03022App:
// 有关此类的实现，请参阅 MFC-0302-2.cpp
//

class CMFC03022App : public CWinApp
{
public:
	CMFC03022App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC03022App theApp;
