
// MFCTest1View.cpp : CMFCTest1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest1.h"
#endif

#include "MFCTest1Doc.h"
#include "MFCTest1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest1View

IMPLEMENT_DYNCREATE(CMFCTest1View, CView)

BEGIN_MESSAGE_MAP(CMFCTest1View, CView)
END_MESSAGE_MAP()

// CMFCTest1View 构造/析构

CMFCTest1View::CMFCTest1View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest1View::~CMFCTest1View()
{
}

BOOL CMFCTest1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest1View 绘制

void CMFCTest1View::OnDraw(CDC* pDC)
{
	CMFCTest1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString S = _T("我是刘美玲");
	pDC->TextOutW(300, 200, S);
	int A = 0;
	CString a;
	a.Format(_T("201812300102"), A);
	pDC->TextOutW(400, 200, a);
}


// CMFCTest1View 诊断

#ifdef _DEBUG
void CMFCTest1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest1Doc* CMFCTest1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest1Doc)));
	return (CMFCTest1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest1View 消息处理程序
