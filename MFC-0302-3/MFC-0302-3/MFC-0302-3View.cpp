
// MFC-0302-3View.cpp : CMFC03023View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0302-3.h"
#endif

#include "MFC-0302-3Doc.h"
#include "MFC-0302-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03023View

IMPLEMENT_DYNCREATE(CMFC03023View, CView)

BEGIN_MESSAGE_MAP(CMFC03023View, CView)
END_MESSAGE_MAP()

// CMFC03023View 构造/析构

CMFC03023View::CMFC03023View()
{
	// TODO: 在此处添加构造代码

}

CMFC03023View::~CMFC03023View()
{
}

BOOL CMFC03023View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC03023View 绘制

void CMFC03023View::OnDraw(CDC* pDC)
{
	CMFC03023Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	GetClientRect(&cr);
	pDC->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC03023View 诊断

#ifdef _DEBUG
void CMFC03023View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03023View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03023Doc* CMFC03023View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03023Doc)));
	return (CMFC03023Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03023View 消息处理程序
