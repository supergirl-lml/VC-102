
// MFCTest12View.cpp : CMFCTest12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest12.h"
#endif

#include "MFCTest12Doc.h"
#include "MFCTest12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest12View

IMPLEMENT_DYNCREATE(CMFCTest12View, CView)

BEGIN_MESSAGE_MAP(CMFCTest12View, CView)
	ON_WM_TIMER()
//	ON_WM_LBUTTONDOWN()
//	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFCTest12View 构造/析构

CMFCTest12View::CMFCTest12View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest12View::~CMFCTest12View()
{
}

BOOL CMFCTest12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest12View 绘制

void CMFCTest12View::OnDraw(CDC* pDC)
{
	CMFCTest12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect client;
	GetClientRect(&client);

	if (pDoc->set) {
		SetTimer(1, 500, NULL);
		if (pDoc->cr.bottom >= client.bottom - client.top)
		pDoc->set = false;
}
		pDC->Ellipse(pDoc->cr);


	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest12View 诊断

#ifdef _DEBUG
void CMFCTest12View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest12Doc* CMFCTest12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest12Doc)));
	return (CMFCTest12Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest12View 消息处理程序


void CMFCTest12View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest12Doc* pDoc = GetDocument();
	CRect client;
	GetClientRect(&client);
	pDoc->cr.top += 50;
	pDoc->cr.bottom += 50;
	if ((pDoc->cr.bottom >= client.bottom) || pDoc->flag == 1)
	{
		pDoc->flag = 1;
		pDoc->cr.bottom = pDoc->cr.bottom - 100;
		pDoc->cr.top -= 100;
	}
	if ((pDoc->cr.top <= 0) || pDoc->flag == 2)
	{
		pDoc->flag = 2;
	}
          Invalidate();	
	CView::OnTimer(nIDEvent);
}
