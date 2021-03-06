
// MFCTest2View.cpp : CMFCTest2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest2.h"
#endif

#include "MFCTest2Doc.h"
#include "MFCTest2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest2View

IMPLEMENT_DYNCREATE(CMFCTest2View, CView)

BEGIN_MESSAGE_MAP(CMFCTest2View, CView)
END_MESSAGE_MAP()

// CMFCTest2View 构造/析构

CMFCTest2View::CMFCTest2View()
{
	// TODO: 在此处添加构造代码
	int A = 0;

}

CMFCTest2View::~CMFCTest2View()
{
}

BOOL CMFCTest2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest2View 绘制

void CMFCTest2View::OnDraw(CDC* pDC)
{
	CMFCTest2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(300, 200, pDoc->S);
	CString a;
	a.Format(_T("102"), pDoc->A);
	pDC->TextOutW(400, 200, a);
}


// CMFCTest2View 诊断

#ifdef _DEBUG
void CMFCTest2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest2Doc* CMFCTest2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest2Doc)));
	return (CMFCTest2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest2View 消息处理程序
