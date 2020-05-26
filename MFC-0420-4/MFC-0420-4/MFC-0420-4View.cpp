
// MFC-0420-4View.cpp : CMFC04204View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0420-4.h"
#endif

#include "MFC-0420-4Doc.h"
#include "MFC-0420-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04204View

IMPLEMENT_DYNCREATE(CMFC04204View, CView)

BEGIN_MESSAGE_MAP(CMFC04204View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC04204View 构造/析构

CMFC04204View::CMFC04204View()
{
	// TODO: 在此处添加构造代码

}

CMFC04204View::~CMFC04204View()
{
}

BOOL CMFC04204View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04204View 绘制

void CMFC04204View::OnDraw(CDC* pDC)
{
	CMFC04204Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(pDoc->cr);
}


// CMFC04204View 诊断

#ifdef _DEBUG
void CMFC04204View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04204View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04204Doc* CMFC04204View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04204Doc)));
	return (CMFC04204Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04204View 消息处理程序


void CMFC04204View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC04204Doc* pDoc = GetDocument();
	int color = RGB(0, 0, 0);
	CPen pen;
	pen.CreatePen(PS_DASH, 1, color);
	CPen *oldPen = NULL;
	CDC*dc = GetDC();
	oldPen = dc->SelectObject(&pen);
	CBrush *oldbrush = NULL;
	CBrush *brush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	oldbrush = dc->SelectObject(brush);
	x = point.x;
    y = point.y;
	if (x >= pDoc->cr.left&&x <= pDoc->cr.right&&y >= pDoc->cr.top&&y <= pDoc->cr.bottom)
	{
		CRect re(pDoc->cr.left,pDoc->cr.top, pDoc->cr.right, pDoc->cr.bottom);
		dc->Rectangle(re);
	}
	

	CView::OnLButtonDown(nFlags, point);
}
