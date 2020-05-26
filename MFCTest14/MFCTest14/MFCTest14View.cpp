
// MFCTest14View.cpp : CMFCTest14View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest14.h"
#endif

#include "MFCTest14Doc.h"
#include "MFCTest14View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest14View

IMPLEMENT_DYNCREATE(CMFCTest14View, CView)

BEGIN_MESSAGE_MAP(CMFCTest14View, CView)
	ON_WM_TIMER()
	ON_COMMAND(ID_32772, &CMFCTest14View::On32772)
END_MESSAGE_MAP()

// CMFCTest14View ����/����

CMFCTest14View::CMFCTest14View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest14View::~CMFCTest14View()
{
}

BOOL CMFCTest14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest14View ����

void CMFCTest14View::OnDraw(CDC* pDC)
{
	CMFCTest14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	SetTimer(pDoc->r, 1500, NULL);
	int t;
	CRect cr;
	this->GetClientRect(&cr);
	pDoc->x = cr.Width() / 2;
	pDoc->y = cr.Height() / 2;
	if (pDoc->x < pDoc->y)
		t = pDoc->x;
	else
		t = pDoc->y;
	if (pDoc->flag && pDoc->R <= t)
	{
		CClientDC dc(this);
		CBrush cbrush;
		int color;
		color = RGB(pDoc->r, pDoc->g, pDoc->b);
		cbrush.CreateSolidBrush(color);
		dc.SelectObject(&cbrush);
		dc.Ellipse(pDoc->x - pDoc->R, pDoc->y - pDoc->R, pDoc->x + pDoc->R, pDoc->y + pDoc->R);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest14View ���

#ifdef _DEBUG
void CMFCTest14View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest14View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest14Doc* CMFCTest14View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest14Doc)));
	return (CMFCTest14Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest14View ��Ϣ�������


void CMFCTest14View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->R += 5;
	pDoc->r += 10;
	pDoc->g += 20;
	pDoc->b += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMFCTest14View::On32772()
{
	// TODO: �ڴ���������������
	CMFCTest14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->flag = true;
}
