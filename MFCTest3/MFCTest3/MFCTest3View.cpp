
// MFCTest3View.cpp : CMFCTest3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest3.h"
#endif

#include "MFCTest3Doc.h"
#include "MFCTest3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest3View

IMPLEMENT_DYNCREATE(CMFCTest3View, CView)

BEGIN_MESSAGE_MAP(CMFCTest3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest3View 构造/析构

CMFCTest3View::CMFCTest3View()
{
	// TODO: 在此处添加构造代码
    count = 0;

}

CMFCTest3View::~CMFCTest3View()
{
}

BOOL CMFCTest3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest3View 绘制

void CMFCTest3View::OnDraw(CDC* pDC)
{
	CMFCTest3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

}


// CMFCTest3View 诊断

#ifdef _DEBUG
void CMFCTest3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest3Doc* CMFCTest3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest3Doc)));
	return (CMFCTest3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest3View 消息处理程序


void CMFCTest3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest3Doc* pDoc = GetDocument();
	pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCTest3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("count=%d"), pDoc->count);
	dc.TextOutW(100,100,s);
	CView::OnRButtonDown(nFlags, point);
}
