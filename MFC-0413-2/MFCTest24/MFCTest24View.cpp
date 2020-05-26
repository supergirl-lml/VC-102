
// MFCTest24View.cpp : CMFCTest24View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest24.h"
#endif

#include "MFCTest24Doc.h"
#include "MFCTest24View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest24View

IMPLEMENT_DYNCREATE(CMFCTest24View, CView)

BEGIN_MESSAGE_MAP(CMFCTest24View, CView)
	ON_COMMAND(ID_32771, &CMFCTest24View::OnMultiple)
END_MESSAGE_MAP()

// CMFCTest24View 构造/析构

CMFCTest24View::CMFCTest24View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest24View::~CMFCTest24View()
{
}

BOOL CMFCTest24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest24View 绘制

void CMFCTest24View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest24View 诊断

#ifdef _DEBUG
void CMFCTest24View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest24Doc* CMFCTest24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest24Doc)));
	return (CMFCTest24Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest24View 消息处理程序


void CMFCTest24View::OnMultiple()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg md;
	int r=md.DoModal();
	if (r == IDOK) {
		int A, D, C;
		A = md.a;
		D = md.d;
		C = md.c;
		
	}
	

}
