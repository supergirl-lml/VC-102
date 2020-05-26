
// MFC-0420-5View.cpp : CMFC04205View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0420-5.h"
#endif
#include"MyDlg.h"
#include "MFC-0420-5Doc.h"
#include "MFC-0420-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04205View

IMPLEMENT_DYNCREATE(CMFC04205View, CView)

BEGIN_MESSAGE_MAP(CMFC04205View, CView)
	ON_COMMAND(ID_Paint, &CMFC04205View::OnPaint)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC04205View 构造/析构

CMFC04205View::CMFC04205View()
{
	// TODO: 在此处添加构造代码

}

CMFC04205View::~CMFC04205View()
{
}

BOOL CMFC04205View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04205View 绘制

void CMFC04205View::OnDraw(CDC* pDC)
{
	CMFC04205Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(pDoc->cr);
}


// CMFC04205View 诊断

#ifdef _DEBUG
void CMFC04205View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04205View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04205Doc* CMFC04205View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04205Doc)));
	return (CMFC04205Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04205View 消息处理程序


void CMFC04205View::OnPaint()
{
	// TODO: 在此添加命令处理程序代码
	CMFC04205Doc* pDoc = GetDocument();
	MyDlg md;
	int r = md.DoModal();
	if (r == IDOK) {
		int R, G, B;
		R = md.r;
		G = md.g;
		B = md.b;
		CBrush cbrush;
		CClientDC dc(this);
		int color;
		color = RGB(R, G, B);
		cbrush.CreateSolidBrush(color);
		dc.SelectObject(&cbrush);
		dc.Ellipse(pDoc->cr);
	}


}


void CMFC04205View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC04205Doc* pDoc = GetDocument();
	int color = RGB(0, 0, 0);
	CPen pen;
	pen.CreatePen(PS_DASH, 1, color);
	CPen *oldPen = NULL;
	CDC*dc = GetDC();
	oldPen = dc->SelectObject(&pen);
	CBrush *oldbrush = NULL;
	CBrush *brush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	oldbrush = dc->SelectObject(brush);
	 
	if (point.x>= pDoc->cr.left && point.x <= pDoc->cr.right && point.y >= pDoc->cr.top && point.y <= pDoc->cr.bottom)
	{
		CRect re(pDoc->cr.left, pDoc->cr.top, pDoc->cr.right, pDoc->cr.bottom);
		dc->Rectangle(re);
	}
	CView::OnLButtonDown(nFlags, point);
}
