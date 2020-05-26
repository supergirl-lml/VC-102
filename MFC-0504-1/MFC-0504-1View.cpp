
// MFC-0504-1View.cpp : CMFC05041View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0504-1.h"
#endif

#include "MFC-0504-1Doc.h"
#include "MFC-0504-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"

// CMFC05041View

IMPLEMENT_DYNCREATE(CMFC05041View, CView)

BEGIN_MESSAGE_MAP(CMFC05041View, CView)
END_MESSAGE_MAP()

// CMFC05041View 构造/析构

CMFC05041View::CMFC05041View()
{
	// TODO: 在此处添加构造代码

}

CMFC05041View::~CMFC05041View()
{
}

BOOL CMFC05041View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC05041View 绘制

void CMFC05041View::OnDraw(CDC* pDC)
{
	CMFC05041Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int num=factorial(5);
	CString s;
	s.Format(_T("%d"), num);
	pDC->TextOutW(200, 150, s);
}


// CMFC05041View 诊断

#ifdef _DEBUG
void CMFC05041View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC05041View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC05041Doc* CMFC05041View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC05041Doc)));
	return (CMFC05041Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC05041View 消息处理程序
