
// MFCTest10View.cpp : CMFCTest10View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest10.h"
#endif

#include "MFCTest10Doc.h"
#include "MFCTest10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest10View

IMPLEMENT_DYNCREATE(CMFCTest10View, CView)

BEGIN_MESSAGE_MAP(CMFCTest10View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCTest10View 构造/析构

CMFCTest10View::CMFCTest10View()
{
	// TODO: 在此处添加构造代码
	count = 0;
	sign = 0;
}

CMFCTest10View::~CMFCTest10View()
{
}

BOOL CMFCTest10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest10View 绘制

void CMFCTest10View::OnDraw(CDC* pDC)
{
	CMFCTest10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest10View 诊断

#ifdef _DEBUG
void CMFCTest10View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest10Doc* CMFCTest10View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest10Doc)));
	return (CMFCTest10Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest10View 消息处理程序


void CMFCTest10View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest10Doc* pDoc = GetDocument();
	GetCapture();
	pDoc->x = point.x;
	pDoc->y = point.y;
	sign = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCTest10View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest10Doc* pDoc = GetDocument();
	if (sign == 1)
		count++;
	CClientDC dc(this);
	CString s;
	s.Format(_T("移动次数：%d"), count);
    dc.TextOutW(20, 20, s);
	CView::OnMouseMove(nFlags, point);
}


void CMFCTest10View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest10Doc* pDoc = GetDocument();

	ASSERT_VALID(pDoc);

	if (!pDoc)
		return;
	sign = 0;
	ReleaseCapture();
	CClientDC dc(this);
	int num;
	int sum = 0;
	sum += point.x - pDoc->x;
	num = sum;
	CString a;
	a.Format(_T("每次横向移动%d个像素"), num);
	dc.TextOutW(200, 20, a);
	CView::OnLButtonUp(nFlags, point);
}
