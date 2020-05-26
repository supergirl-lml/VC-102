
// MFC-0413-3View.cpp : CMFC04133View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0413-3.h"
#endif

#include "MFC-0413-3Doc.h"
#include "MFC-0413-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04133View

IMPLEMENT_DYNCREATE(CMFC04133View, CView)

BEGIN_MESSAGE_MAP(CMFC04133View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC04133View 构造/析构

CMFC04133View::CMFC04133View()
{
	// TODO: 在此处添加构造代码

}

CMFC04133View::~CMFC04133View()
{
}

BOOL CMFC04133View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04133View 绘制

void CMFC04133View::OnDraw(CDC* pDC)
{
	CMFC04133Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect client;
	GetClientRect(&client);

	if (pDoc->set) {
		SetTimer(1, 500, NULL);
		if (pDoc->cr.bottom >= client.bottom - client.top)
			pDoc->set = false;
	}
	else
		KillTimer(1);

	pDC->Ellipse(pDoc->cr);
	

}


// CMFC04133View 诊断

#ifdef _DEBUG
void CMFC04133View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04133View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04133Doc* CMFC04133View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04133Doc)));
	return (CMFC04133Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04133View 消息处理程序


void CMFC04133View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC04133Doc* pDoc = GetDocument();
	
	CRect  client;
	GetClientRect(&client);
	pDoc->cr.left+= 50;
	pDoc->cr.right += 50;
	if ((pDoc->cr.right >= client.right) || pDoc->flag == 1)
	{
		pDoc->flag = 1;
		pDoc->cr.right = pDoc->cr.right - 100;
		pDoc->cr.left -= 100;
	}
	if ((pDoc->cr.left <= 0) || pDoc->flag == 2)
	{
		pDoc->flag = 2;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMFC04133View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC04133Doc* pDoc = GetDocument();
	pDoc->set = true;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMFC04133View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC04133Doc* pDoc = GetDocument();
    pDoc->set = false;
	//Invalidate();
	CView::OnLButtonDblClk(nFlags, point);
}
