
// MFCTest16View.cpp : CMFCTest16View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest16.h"
#endif

#include "MFCTest16Doc.h"
#include "MFCTest16View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest16View

IMPLEMENT_DYNCREATE(CMFCTest16View, CView)

BEGIN_MESSAGE_MAP(CMFCTest16View, CView)
END_MESSAGE_MAP()

// CMFCTest16View 构造/析构

CMFCTest16View::CMFCTest16View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFCTest16View::~CMFCTest16View()
{
}

BOOL CMFCTest16View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest16View 绘制

void CMFCTest16View::OnDraw(CDC* pDC)
{
	CMFCTest16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CMFCTest16View 诊断

#ifdef _DEBUG
void CMFCTest16View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest16View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest16Doc* CMFCTest16View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest16Doc)));
	return (CMFCTest16Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest16View 消息处理程序
