
// MFCTest14View.cpp : CMFCTest14View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest14.h"
#endif

#include "MFCTest14Doc.h"
#include "MFCTest14View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest14View

IMPLEMENT_DYNCREATE(CMFCTest14View, CView)

BEGIN_MESSAGE_MAP(CMFCTest14View, CView)
	ON_WM_TIMER()
	ON_COMMAND(ID_32772, &CMFCTest14View::On32772)
END_MESSAGE_MAP()

// CMFCTest14View 构造/析构

CMFCTest14View::CMFCTest14View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest14View::~CMFCTest14View()
{
}

BOOL CMFCTest14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest14View 绘制

void CMFCTest14View::OnDraw(CDC* pDC)
{
	CMFCTest14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	SetTimer(pDoc->r, 1500, NULL);
	int t;
	CRect cr;
	this->GetClientRect(&cr);
	pDoc->x = cr.Width() / 2;
	pDoc->y = cr.Height() / 2;
	if (pDoc->x < pDoc->y)
		t = pDoc->x;
	else
		t = pDoc->y;
	if (pDoc->flag && pDoc->R <= t)
	{
		CClientDC dc(this);
		CBrush cbrush;
		int color;
		color = RGB(pDoc->r, pDoc->g, pDoc->b);
		cbrush.CreateSolidBrush(color);
		dc.SelectObject(&cbrush);
		dc.Ellipse(pDoc->x - pDoc->R, pDoc->y - pDoc->R, pDoc->x + pDoc->R, pDoc->y + pDoc->R);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest14View 诊断

#ifdef _DEBUG
void CMFCTest14View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest14View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest14Doc* CMFCTest14View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest14Doc)));
	return (CMFCTest14Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest14View 消息处理程序


void CMFCTest14View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->R += 5;
	pDoc->r += 10;
	pDoc->g += 20;
	pDoc->b += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMFCTest14View::On32772()
{
	// TODO: 在此添加命令处理程序代码
	CMFCTest14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->flag = true;
}
