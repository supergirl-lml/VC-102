
// MFCTest12View.cpp : CMFCTest12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest12.h"
#endif

#include "MFCTest12Doc.h"
#include "MFCTest12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest12View

IMPLEMENT_DYNCREATE(CMFCTest12View, CView)

BEGIN_MESSAGE_MAP(CMFCTest12View, CView)
	ON_WM_TIMER()
//	ON_WM_LBUTTONDOWN()
//	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFCTest12View ����/����

CMFCTest12View::CMFCTest12View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest12View::~CMFCTest12View()
{
}

BOOL CMFCTest12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest12View ����

void CMFCTest12View::OnDraw(CDC* pDC)
{
	CMFCTest12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect client;
	GetClientRect(&client);

	if (pDoc->set) {
		SetTimer(1, 500, NULL);
		if (pDoc->cr.bottom >= client.bottom - client.top)
		pDoc->set = false;
}
		pDC->Ellipse(pDoc->cr);


	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest12View ���

#ifdef _DEBUG
void CMFCTest12View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest12Doc* CMFCTest12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest12Doc)));
	return (CMFCTest12Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest12View ��Ϣ�������


void CMFCTest12View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest12Doc* pDoc = GetDocument();
	CRect client;
	GetClientRect(&client);
	pDoc->cr.top += 50;
	pDoc->cr.bottom += 50;
	if ((pDoc->cr.bottom >= client.bottom) || pDoc->flag == 1)
	{
		pDoc->flag = 1;
		pDoc->cr.bottom = pDoc->cr.bottom - 100;
		pDoc->cr.top -= 100;
	}
	if ((pDoc->cr.top <= 0) || pDoc->flag == 2)
	{
		pDoc->flag = 2;
	}
          Invalidate();	
	CView::OnTimer(nIDEvent);
}
