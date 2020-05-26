
// MFCTest8View.cpp : CMFCTest8View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest8.h"
#endif

#include "MFCTest8Doc.h"
#include "MFCTest8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest8View

IMPLEMENT_DYNCREATE(CMFCTest8View, CView)

BEGIN_MESSAGE_MAP(CMFCTest8View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest8View ����/����

CMFCTest8View::CMFCTest8View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest8View::~CMFCTest8View()
{
}

BOOL CMFCTest8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest8View ����

void CMFCTest8View::OnDraw(CDC* pDC)
{
	CMFCTest8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	    pDC->Rectangle(pDoc->A);
		pDC->Rectangle(pDoc->B);
		pDC->Rectangle(pDoc->C);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest8View ���

#ifdef _DEBUG
void CMFCTest8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest8Doc* CMFCTest8View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest8Doc)));
	return (CMFCTest8Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest8View ��Ϣ�������


void CMFCTest8View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);

	CMFCTest8Doc*pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	if (point.x>=30&point.x<=150&point.y>=30&point.y<=150)
	{	
		s.Format(_T("a=%d"), pDoc->a);
		dc.TextOutW(point.x,point.y, s);

	}
	if (point.x >= 200 & point.x <= 300&point.y >= 30 & point.y <= 150)
	{
		s.Format(_T("b=%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	if( (!(point.x >= 30 & point.x <= 150 & point.y >= 30 & point.y <= 150))  &  (! ( point.x >= 200 & point.x <= 300 & point.y >= 30 & point.y <= 150)))
	{
		s=_T("�����Ч");
		dc.TextOutW(point.x, point.y, s);
	}
}


void CMFCTest8View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest8Doc*pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	if (point.x >= 400 & point.x <= 600&point.y >= 100 &point.y <= 300)
	{
		int mun = (pDoc->a) + (pDoc->b);
		s.Format(_T("a+b=%d"),mun);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
