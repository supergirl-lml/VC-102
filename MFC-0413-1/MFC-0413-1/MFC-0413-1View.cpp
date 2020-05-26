
// MFC-0413-1View.cpp : CMFC04131View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0413-1.h"
#endif

#include "MFC-0413-1Doc.h"
#include "MFC-0413-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04131View

IMPLEMENT_DYNCREATE(CMFC04131View, CView)

BEGIN_MESSAGE_MAP(CMFC04131View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC04131View 构造/析构

CMFC04131View::CMFC04131View()
{
	// TODO: 在此处添加构造代码
	flag = 0;

}

CMFC04131View::~CMFC04131View()
{
}

BOOL CMFC04131View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04131View 绘制

void CMFC04131View::OnDraw(CDC* pDC)
{
	CMFC04131Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	pDoc->cr.left = x - 50;
	pDoc->cr.top = y - 50;
	pDoc->cr.right = x + 50;
	pDoc->cr.bottom = y + 50;
	dc.Rectangle(pDoc->cr.left, pDoc->cr.top, pDoc->cr.right, pDoc->cr.bottom);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC04131View 诊断

#ifdef _DEBUG
void CMFC04131View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04131View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04131Doc* CMFC04131View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04131Doc)));
	return (CMFC04131Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04131View 消息处理程序


void CMFC04131View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCapture();
	x = point.x;
	y = point.y;
	flag += 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC04131View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	ReleaseCapture();
	x1 = point.x;
	y1 = point.y;
	x = x1;
	y = y1;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CMFC04131View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
}
