
// MFC-0504-3View.cpp : CMFC05043View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0504-3.h"
#endif

#include "MFC-0504-3Doc.h"
#include "MFC-0504-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"Lib3.h"

// CMFC05043View

IMPLEMENT_DYNCREATE(CMFC05043View, CView)

BEGIN_MESSAGE_MAP(CMFC05043View, CView)
END_MESSAGE_MAP()

// CMFC05043View 构造/析构

CMFC05043View::CMFC05043View()
{
	// TODO: 在此处添加构造代码

}

CMFC05043View::~CMFC05043View()
{
}

BOOL CMFC05043View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC05043View 绘制

void CMFC05043View::OnDraw(CDC* pDC)
{
	CMFC05043Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	CString ss;
	int num1 = factorial(5);
	float num2 = FAC().convert(30.0);
	s.Format(_T("输出5的阶乘：%d"), num1); 
	ss.Format(_T("输出角度为30.0的弧度：%f"), num2);
	pDC->TextOutW(200, 150, s);
	pDC->TextOutW(200, 200, ss);
}


// CMFC05043View 诊断

#ifdef _DEBUG
void CMFC05043View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC05043View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC05043Doc* CMFC05043View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC05043Doc)));
	return (CMFC05043Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC05043View 消息处理程序
