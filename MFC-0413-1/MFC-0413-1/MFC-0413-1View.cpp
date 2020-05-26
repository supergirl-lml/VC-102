
// MFC-0413-1View.cpp : CMFC04131View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0413-1.h"
#endif

#include "MFC-0413-1Doc.h"
#include "MFC-0413-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04131View

IMPLEMENT_DYNCREATE(CMFC04131View, CView)

BEGIN_MESSAGE_MAP(CMFC04131View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC04131View ����/����

CMFC04131View::CMFC04131View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;

}

CMFC04131View::~CMFC04131View()
{
}

BOOL CMFC04131View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04131View ����

void CMFC04131View::OnDraw(CDC* pDC)
{
	CMFC04131Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	pDoc->cr.left = x - 50;
	pDoc->cr.top = y - 50;
	pDoc->cr.right = x + 50;
	pDoc->cr.bottom = y + 50;
	dc.Rectangle(pDoc->cr.left, pDoc->cr.top, pDoc->cr.right, pDoc->cr.bottom);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04131View ���

#ifdef _DEBUG
void CMFC04131View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04131View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04131Doc* CMFC04131View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04131Doc)));
	return (CMFC04131Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04131View ��Ϣ�������


void CMFC04131View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();
	x = point.x;
	y = point.y;
	flag += 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC04131View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();
	x1 = point.x;
	y1 = point.y;
	x = x1;
	y = y1;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CMFC04131View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
}
