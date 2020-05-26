
// MFCTest7View.cpp : CMFCTest7View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest7.h"
#endif

#include "MFCTest7Doc.h"
#include "MFCTest7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest7View

IMPLEMENT_DYNCREATE(CMFCTest7View, CView)

BEGIN_MESSAGE_MAP(CMFCTest7View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest7View 构造/析构

CMFCTest7View::CMFCTest7View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest7View::~CMFCTest7View()
{
}

BOOL CMFCTest7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest7View 绘制

void CMFCTest7View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest7View 诊断

#ifdef _DEBUG
void CMFCTest7View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest7Doc* CMFCTest7View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest7Doc)));
	return (CMFCTest7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest7View 消息处理程序


void CMFCTest7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest7Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	int num = (pDoc->A )+(pDoc-> B);
	s.Format(_T("A+B=%d"),num);
	dc.TextOutW(100, 100, s);
	CView::OnLButtonDown(nFlags, point);
}
