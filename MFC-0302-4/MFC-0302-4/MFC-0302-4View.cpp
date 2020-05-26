
// MFC-0302-4View.cpp : CMFC03024View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0302-4.h"
#endif

#include "MFC-0302-4Doc.h"
#include "MFC-0302-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03024View

IMPLEMENT_DYNCREATE(CMFC03024View, CView)

BEGIN_MESSAGE_MAP(CMFC03024View, CView)
END_MESSAGE_MAP()

// CMFC03024View 构造/析构

CMFC03024View::CMFC03024View()
{
	// TODO: 在此处添加构造代码

}

CMFC03024View::~CMFC03024View()
{
}

BOOL CMFC03024View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC03024View 绘制

void CMFC03024View::OnDraw(CDC* pDC)
{
	CMFC03024Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int color=RGB(100, 220, 150);
	CClientDC dc(this);
	CRect cr;
	CBrush newBrush;
	newBrush.CreateSolidBrush(color);
	dc.SelectObject(&newBrush);
	GetClientRect(&cr);
	dc.Ellipse(cr);
	DeleteObject(newBrush);
}


// CMFC03024View 诊断

#ifdef _DEBUG
void CMFC03024View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03024View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03024Doc* CMFC03024View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03024Doc)));
	return (CMFC03024Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03024View 消息处理程序
