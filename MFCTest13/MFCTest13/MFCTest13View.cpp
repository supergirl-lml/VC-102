
// MFCTest13View.cpp : CMFCTest13View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest13.h"
#endif

#include "MFCTest13Doc.h"
#include "MFCTest13View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest13View

IMPLEMENT_DYNCREATE(CMFCTest13View, CView)

BEGIN_MESSAGE_MAP(CMFCTest13View, CView)
	ON_COMMAND(ID_32772, &CMFCTest13View::On32772)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCTest13View 构造/析构

CMFCTest13View::CMFCTest13View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest13View::~CMFCTest13View()
{
}

BOOL CMFCTest13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest13View 绘制

void CMFCTest13View::OnDraw(CDC* pDC)
{
	CMFCTest13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if(!pDoc)
		return;

	SetTimer(pDoc->r,  2000, NULL);
	int t;
	CRect cr;
	this->GetClientRect(&cr);
	pDoc->x = cr.Width()/2 ;
	pDoc->y = cr.Height() /2;
	if (pDoc->x < pDoc->y)
		t = pDoc->x;
	else 
		t = pDoc->y;
	if (pDoc->flag && pDoc->r <= t)
	{
		CClientDC dc(this);
		dc.Ellipse(pDoc->x - pDoc->r, pDoc->y - pDoc->r, pDoc->x + pDoc->r, pDoc->y + pDoc->r);
	}
		

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest13View 诊断

#ifdef _DEBUG
void CMFCTest13View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest13Doc* CMFCTest13View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest13Doc)));
	return (CMFCTest13Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest13View 消息处理程序


void CMFCTest13View::On32772()
{
	// TODO: 在此添加命令处理程序代码
	CMFCTest13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->flag = true;

}


void CMFCTest13View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->r += 5;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
