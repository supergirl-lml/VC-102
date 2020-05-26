
// MFCTest8View.cpp : CMFCTest8View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest8.h"
#endif

#include "MFCTest8Doc.h"
#include "MFCTest8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest8View

IMPLEMENT_DYNCREATE(CMFCTest8View, CView)

BEGIN_MESSAGE_MAP(CMFCTest8View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest8View 构造/析构

CMFCTest8View::CMFCTest8View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest8View::~CMFCTest8View()
{
}

BOOL CMFCTest8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest8View 绘制

void CMFCTest8View::OnDraw(CDC* pDC)
{
	CMFCTest8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	    pDC->Rectangle(pDoc->A);
		pDC->Rectangle(pDoc->B);
		pDC->Rectangle(pDoc->C);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest8View 诊断

#ifdef _DEBUG
void CMFCTest8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest8Doc* CMFCTest8View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest8Doc)));
	return (CMFCTest8Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest8View 消息处理程序


void CMFCTest8View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);

	CMFCTest8Doc*pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	if (point.x>=30&point.x<=150&point.y>=30&point.y<=150)
	{	
		s.Format(_T("a=%d"), pDoc->a);
		dc.TextOutW(point.x,point.y, s);

	}
	if (point.x >= 200 & point.x <= 300&point.y >= 30 & point.y <= 150)
	{
		s.Format(_T("b=%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	if( (!(point.x >= 30 & point.x <= 150 & point.y >= 30 & point.y <= 150))  &  (! ( point.x >= 200 & point.x <= 300 & point.y >= 30 & point.y <= 150)))
	{
		s=_T("点击无效");
		dc.TextOutW(point.x, point.y, s);
	}
}


void CMFCTest8View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest8Doc*pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	if (point.x >= 400 & point.x <= 600&point.y >= 100 &point.y <= 300)
	{
		int mun = (pDoc->a) + (pDoc->b);
		s.Format(_T("a+b=%d"),mun);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
