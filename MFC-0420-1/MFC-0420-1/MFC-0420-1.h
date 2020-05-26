
// MFC-0420-1.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CMFC04201App: 
// 有关此类的实现，请参阅 MFC-0420-1.cpp
//

class CMFC04201App : public CWinApp
{
public:
	CMFC04201App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CMFC04201App theApp;