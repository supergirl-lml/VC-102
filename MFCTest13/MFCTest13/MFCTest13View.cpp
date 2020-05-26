
// MFCTest13View.cpp : CMFCTest13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest13.h"
#endif

#include "MFCTest13Doc.h"
#include "MFCTest13View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest13View

IMPLEMENT_DYNCREATE(CMFCTest13View, CView)

BEGIN_MESSAGE_MAP(CMFCTest13View, CView)
	ON_COMMAND(ID_32772, &CMFCTest13View::On32772)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCTest13View ����/����

CMFCTest13View::CMFCTest13View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest13View::~CMFCTest13View()
{
}

BOOL CMFCTest13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest13View ����

void CMFCTest13View::OnDraw(CDC* pDC)
{
	CMFCTest13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if(!pDoc)
		return;

	SetTimer(pDoc->r,  2000, NULL);
	int t;
	CRect cr;
	this->GetClientRect(&cr);
	pDoc->x = cr.Width()/2 ;
	pDoc->y = cr.Height() /2;
	if (pDoc->x < pDoc->y)
		t = pDoc->x;
	else 
		t = pDoc->y;
	if (pDoc->flag && pDoc->r <= t)
	{
		CClientDC dc(this);
		dc.Ellipse(pDoc->x - pDoc->r, pDoc->y - pDoc->r, pDoc->x + pDoc->r, pDoc->y + pDoc->r);
	}
		

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest13View ���

#ifdef _DEBUG
void CMFCTest13View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest13Doc* CMFCTest13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest13Doc)));
	return (CMFCTest13Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest13View ��Ϣ�������


void CMFCTest13View::On32772()
{
	// TODO: �ڴ���������������
	CMFCTest13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->flag = true;

}


void CMFCTest13View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->r += 5;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
