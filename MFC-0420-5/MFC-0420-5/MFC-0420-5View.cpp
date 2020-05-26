
// MFC-0420-5View.cpp : CMFC04205View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMFC04205View ����/����

CMFC04205View::CMFC04205View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04205View::~CMFC04205View()
{
}

BOOL CMFC04205View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04205View ����

void CMFC04205View::OnDraw(CDC* pDC)
{
	CMFC04205Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->cr);
}


// CMFC04205View ���

#ifdef _DEBUG
void CMFC04205View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04205View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04205Doc* CMFC04205View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04205Doc)));
	return (CMFC04205Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04205View ��Ϣ�������


void CMFC04205View::OnPaint()
{
	// TODO: �ڴ���������������
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
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
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
