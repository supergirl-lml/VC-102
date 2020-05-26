
// MFCTest9View.cpp : CMFCTest9View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest9.h"
#endif

#include "MFCTest9Doc.h"
#include "MFCTest9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest9View

IMPLEMENT_DYNCREATE(CMFCTest9View, CView)

BEGIN_MESSAGE_MAP(CMFCTest9View, CView)
	ON_WM_LBUTTONDOWN()
//	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCTest9View 构造/析构

CMFCTest9View::CMFCTest9View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest9View::~CMFCTest9View()
{
}

BOOL CMFCTest9View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest9View 绘制

void CMFCTest9View::OnDraw(CDC* pDC)
{
	CMFCTest9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest9View 诊断

#ifdef _DEBUG
void CMFCTest9View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest9View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest9Doc* CMFCTest9View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest9Doc)));
	return (CMFCTest9Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest9View 消息处理程序


void CMFCTest9View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x1 = point.x;
	y1 = point.y;

	CView::OnLButtonDown(nFlags, point);
}



void CMFCTest9View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	s.Format(_T("鼠标的位置是：(%d,%d)"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s);
	CView::OnMouseMove(nFlags, point);
}


void CMFCTest9View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr(x1, y1, point.x, point.y);
	CClientDC dc(this);
	dc.Rectangle(cr);

	CView::OnLButtonUp(nFlags, point);
}
