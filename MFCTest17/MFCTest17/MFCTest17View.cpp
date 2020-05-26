
// MFCTest17View.cpp : CMFCTest17View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest17.h"
#endif

#include "MFCTest17Doc.h"
#include "MFCTest17View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest17View

IMPLEMENT_DYNCREATE(CMFCTest17View, CView)

BEGIN_MESSAGE_MAP(CMFCTest17View, CView)
	ON_COMMAND(ID_32771, &CMFCTest17View::On32771)
	ON_COMMAND(ID_32772, &CMFCTest17View::On32772)
	ON_COMMAND(ID_32773, &CMFCTest17View::OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCTest17View 构造/析构

CMFCTest17View::CMFCTest17View()
{
	// TODO: 在此处添加构造代码
	a = 0;
	b = 0;
	c = 0;
}

CMFCTest17View::~CMFCTest17View()
{
}

BOOL CMFCTest17View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest17View 绘制

void CMFCTest17View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest17View 诊断

#ifdef _DEBUG
void CMFCTest17View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest17View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest17Doc* CMFCTest17View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest17Doc)));
	return (CMFCTest17Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest17View 消息处理程序


void CMFCTest17View::On32771()
{
	// TODO: 在此添加命令处理程序代码
	a = 1;
}


void CMFCTest17View::On32772()
{
	// TODO: 在此添加命令处理程序代码
	b = 1;
}


void CMFCTest17View::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	c = 1;
}


void CMFCTest17View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_star = point;
	cr.left = point.x;
	cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCTest17View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	npoint = point;
	cr.right = point.x;
	cr.bottom = point.y;
	if (a == 1)
	{
		CClientDC dc(this);
		dc.MoveTo(m_star);
		dc.LineTo(npoint);
		a = 0;
	}
	else if (b == 1)
	{
		CClientDC dc(this);
		dc.Rectangle(cr.left, cr.top, cr.right, cr.bottom);
		b = 0;
	}
	else if (c == 1)
	{
		CClientDC dc(this);
		dc.Ellipse(cr.left, cr.top, cr.right, cr.bottom);
		c = 0;
	}

	CView::OnLButtonUp(nFlags, point);
}
