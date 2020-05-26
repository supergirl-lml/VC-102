
// MFCTest4View.cpp : CMFCTest4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest4.h"
#endif

#include "MFCTest4Doc.h"
#include "MFCTest4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest4View

IMPLEMENT_DYNCREATE(CMFCTest4View, CView)

BEGIN_MESSAGE_MAP(CMFCTest4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest4View ����/����

CMFCTest4View::CMFCTest4View()
{
	// TODO: �ڴ˴���ӹ������
	cr.top = 30;
	cr.left = 100;
	cr.right = 30;
	cr.bottom = 100;

}

CMFCTest4View::~CMFCTest4View()
{
}

BOOL CMFCTest4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest4View ����

void CMFCTest4View::OnDraw(CDC* pDC)
{
	CMFCTest4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest4View ���

#ifdef _DEBUG
void CMFCTest4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest4Doc* CMFCTest4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest4Doc)));
	return (CMFCTest4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest4View ��Ϣ�������


void CMFCTest4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CClientDC dc(this);
	this->GetClientRect(&cr);
	if (cr.Width() > cr.Height())
	{
		rect.top =0;
		rect.left = ( cr.Width()- cr.Height() )/2;
		rect.right = (cr.Width() - cr.Height()) / 2 + cr.Height();
		rect.bottom = cr.bottom;
	}
	else
	{
		rect.top = (cr.Height() -cr.Width() ) / 2;
		rect.left = 0;
		rect.right = cr.right;
		rect.bottom = (cr.Height() - cr.Width()) / 2 + cr.Width();
	}
	GetDC()->Ellipse(rect);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
