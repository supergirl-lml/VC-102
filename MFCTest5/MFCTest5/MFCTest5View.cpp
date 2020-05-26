
// MFCTest5View.cpp : CMFCTest5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest5.h"
#endif

#include "MFCTest5Doc.h"
#include "MFCTest5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest5View

IMPLEMENT_DYNCREATE(CMFCTest5View, CView)

BEGIN_MESSAGE_MAP(CMFCTest5View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest5View 构造/析构

CMFCTest5View::CMFCTest5View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(300);

}

CMFCTest5View::~CMFCTest5View()
{
}

BOOL CMFCTest5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest5View 绘制

void CMFCTest5View::OnDraw(CDC* pDC)
{
	CMFCTest5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest5View 诊断

#ifdef _DEBUG
void CMFCTest5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest5Doc* CMFCTest5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest5Doc)));
	return (CMFCTest5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest5View 消息处理程序


void CMFCTest5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int a = rand() % 50 + 10;
	int b = rand() % 50 + 5;
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	CClientDC dc(this);
	GetDC()->Ellipse(cr);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
