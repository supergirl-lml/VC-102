
// MFC-0407-1View.cpp : CMFC04071View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0407-1.h"
#endif

#include "MFC-0407-1Doc.h"
#include "MFC-0407-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"MyDlg.h"

// CMFC04071View

IMPLEMENT_DYNCREATE(CMFC04071View, CView)

BEGIN_MESSAGE_MAP(CMFC04071View, CView)
	ON_COMMAND(ID_32771, &CMFC04071View::OnPopout)
END_MESSAGE_MAP()

// CMFC04071View 构造/析构

CMFC04071View::CMFC04071View()
{
	// TODO: 在此处添加构造代码

}

CMFC04071View::~CMFC04071View()
{
}

BOOL CMFC04071View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04071View 绘制

void CMFC04071View::OnDraw(CDC* /*pDC*/)
{
	CMFC04071Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC04071View 诊断

#ifdef _DEBUG
void CMFC04071View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04071View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04071Doc* CMFC04071View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04071Doc)));
	return (CMFC04071Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04071View 消息处理程序


void CMFC04071View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t != IDOK)
	{
		CClientDC dc(this);
		CString s = _T("你已退出对话框！");
		dc.TextOutW(100, 100, s);
	}
}
