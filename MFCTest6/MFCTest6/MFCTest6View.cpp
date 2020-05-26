
// MFCTest6View.cpp : CMFCTest6View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest6.h"
#endif

#include "MFCTest6Doc.h"
#include "MFCTest6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest6View

IMPLEMENT_DYNCREATE(CMFCTest6View, CView)

BEGIN_MESSAGE_MAP(CMFCTest6View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCTest6View 构造/析构

CMFCTest6View::CMFCTest6View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest6View::~CMFCTest6View()
{
}

BOOL CMFCTest6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest6View 绘制

void CMFCTest6View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest6View 诊断

#ifdef _DEBUG
void CMFCTest6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest6Doc* CMFCTest6View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest6Doc)));
	return (CMFCTest6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest6View 消息处理程序


void CMFCTest6View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//CMFCTest3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s=_T("左键正被按下");
	dc.TextOutW(100, 100, s);
	CView::OnLButtonDown(nFlags, point);
}


void CMFCTest6View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s = _T("左键正在抬起");
	dc.TextOutW(100, 200, s);
	CView::OnLButtonUp(nFlags, point);
}
