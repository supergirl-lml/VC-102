
// MFCTest4View.cpp : CMFCTest4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest4.h"
#endif

#include "MFCTest4Doc.h"
#include "MFCTest4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest4View

IMPLEMENT_DYNCREATE(CMFCTest4View, CView)

BEGIN_MESSAGE_MAP(CMFCTest4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest4View 构造/析构

CMFCTest4View::CMFCTest4View()
{
	// TODO: 在此处添加构造代码
	cr.top = 30;
	cr.left = 100;
	cr.right = 30;
	cr.bottom = 100;

}

CMFCTest4View::~CMFCTest4View()
{
}

BOOL CMFCTest4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest4View 绘制

void CMFCTest4View::OnDraw(CDC* pDC)
{
	CMFCTest4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest4View 诊断

#ifdef _DEBUG
void CMFCTest4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest4Doc* CMFCTest4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest4Doc)));
	return (CMFCTest4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest4View 消息处理程序


void CMFCTest4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CClientDC dc(this);
	this->GetClientRect(&cr);
	if (cr.Width() > cr.Height())
	{
		rect.top =0;
		rect.left = ( cr.Width()- cr.Height() )/2;
		rect.right = (cr.Width() - cr.Height()) / 2 + cr.Height();
		rect.bottom = cr.bottom;
	}
	else
	{
		rect.top = (cr.Height() -cr.Width() ) / 2;
		rect.left = 0;
		rect.right = cr.right;
		rect.bottom = (cr.Height() - cr.Width()) / 2 + cr.Width();
	}
	GetDC()->Ellipse(rect);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
