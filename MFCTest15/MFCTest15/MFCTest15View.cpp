
// MFCTest15View.cpp : CMFCTest15View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest15.h"
#endif

#include "MFCTest15Doc.h"
#include "MFCTest15View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest15View

IMPLEMENT_DYNCREATE(CMFCTest15View, CView)

BEGIN_MESSAGE_MAP(CMFCTest15View, CView)
	ON_COMMAND(ID_32771, &CMFCTest15View::On32771)
END_MESSAGE_MAP()

// CMFCTest15View 构造/析构

CMFCTest15View::CMFCTest15View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest15View::~CMFCTest15View()
{
}

BOOL CMFCTest15View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest15View 绘制

void CMFCTest15View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest15View 诊断

#ifdef _DEBUG
void CMFCTest15View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest15View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest15Doc* CMFCTest15View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest15Doc)));
	return (CMFCTest15Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest15View 消息处理程序


void CMFCTest15View::On32771()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("刘美玲");
	CClientDC dc(this);
	dc.TextOutW(150, 100, s);
}
