
// MFC-0414-1View.cpp : CMFC04141View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0414-1.h"
#endif

#include "MFC-0414-1Doc.h"
#include "MFC-0414-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04141View

IMPLEMENT_DYNCREATE(CMFC04141View, CView)

BEGIN_MESSAGE_MAP(CMFC04141View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC04141View 构造/析构

CMFC04141View::CMFC04141View()
{
	// TODO: 在此处添加构造代码

}

CMFC04141View::~CMFC04141View()
{
}

BOOL CMFC04141View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04141View 绘制

void CMFC04141View::OnDraw(CDC* /*pDC*/)
{
	CMFC04141Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC04141View 诊断

#ifdef _DEBUG
void CMFC04141View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04141View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04141Doc* CMFC04141View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04141Doc)));
	return (CMFC04141Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04141View 消息处理程序


void CMFC04141View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	cfd.GetPathName();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString file = cfd.GetPathName();
		dc.TextOutW(100, 100, file);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
