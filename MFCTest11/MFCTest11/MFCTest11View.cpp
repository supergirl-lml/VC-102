
// MFCTest11View.cpp : CMFCTest11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest11.h"
#endif

#include "MFCTest11Doc.h"
#include "MFCTest11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest11View

IMPLEMENT_DYNCREATE(CMFCTest11View, CView)

BEGIN_MESSAGE_MAP(CMFCTest11View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest11View 构造/析构

CMFCTest11View::CMFCTest11View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest11View::~CMFCTest11View()
{
}

BOOL CMFCTest11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest11View 绘制

void CMFCTest11View::OnDraw(CDC* pDC)
{
	CMFCTest11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->Rectangle(pDoc->m_crlRect);

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest11View 诊断

#ifdef _DEBUG
void CMFCTest11View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest11Doc* CMFCTest11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest11Doc)));
	return (CMFCTest11Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest11View 消息处理程序


void CMFCTest11View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest11Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_crlRect.left > 0);
		{
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->m_crlRect.top <= (clientRec.bottom - clientRec.top))
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_crlRect.bottom >= (clientRec.top - clientRec.bottom))
		{
			pDoc->m_crlRect.top += 5;
			pDoc->m_crlRect.bottom += 5;
		}
		break;
	case VK_HOME:
		if (pDoc->m_crlRect.left > 0 && pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.left -= 5;
		}
		break;
	case VK_END:
		if (pDoc->m_crlRect.left > 0 && pDoc->m_crlRect.right > clientRec.left) 
		{
			pDoc->m_crlRect.right += 5;
			pDoc->m_crlRect.bottom  += 5;
		}
	}
	InvalidateRect(NULL, TRUE);
    CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFCTest11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCTest11Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	pDoc->m_crlRect.left = 400; 
	pDoc->m_crlRect.top = 200;
	pDoc->m_crlRect.right = 500; 
	pDoc->m_crlRect.bottom = 300;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
