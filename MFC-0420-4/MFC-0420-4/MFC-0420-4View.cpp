
// MFC-0420-4View.cpp : CMFC04204View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMFC04204View ����/����

CMFC04204View::CMFC04204View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04204View::~CMFC04204View()
{
}

BOOL CMFC04204View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04204View ����

void CMFC04204View::OnDraw(CDC* pDC)
{
	CMFC04204Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->cr);
}


// CMFC04204View ���

#ifdef _DEBUG
void CMFC04204View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04204View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04204Doc* CMFC04204View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04204Doc)));
	return (CMFC04204Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04204View ��Ϣ�������


void CMFC04204View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
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
