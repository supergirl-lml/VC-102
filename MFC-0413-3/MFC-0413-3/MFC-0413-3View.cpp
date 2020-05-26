
// MFC-0413-3View.cpp : CMFC04133View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0413-3.h"
#endif

#include "MFC-0413-3Doc.h"
#include "MFC-0413-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04133View

IMPLEMENT_DYNCREATE(CMFC04133View, CView)

BEGIN_MESSAGE_MAP(CMFC04133View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC04133View ����/����

CMFC04133View::CMFC04133View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04133View::~CMFC04133View()
{
}

BOOL CMFC04133View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04133View ����

void CMFC04133View::OnDraw(CDC* pDC)
{
	CMFC04133Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect client;
	GetClientRect(&client);

	if (pDoc->set) {
		SetTimer(1, 500, NULL);
		if (pDoc->cr.bottom >= client.bottom - client.top)
			pDoc->set = false;
	}
	else
		KillTimer(1);

	pDC->Ellipse(pDoc->cr);
	

}


// CMFC04133View ���

#ifdef _DEBUG
void CMFC04133View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04133View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04133Doc* CMFC04133View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04133Doc)));
	return (CMFC04133Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04133View ��Ϣ�������


void CMFC04133View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC04133Doc* pDoc = GetDocument();
	
	CRect  client;
	GetClientRect(&client);
	pDoc->cr.left+= 50;
	pDoc->cr.right += 50;
	if ((pDoc->cr.right >= client.right) || pDoc->flag == 1)
	{
		pDoc->flag = 1;
		pDoc->cr.right = pDoc->cr.right - 100;
		pDoc->cr.left -= 100;
	}
	if ((pDoc->cr.left <= 0) || pDoc->flag == 2)
	{
		pDoc->flag = 2;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMFC04133View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC04133Doc* pDoc = GetDocument();
	pDoc->set = true;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMFC04133View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC04133Doc* pDoc = GetDocument();
    pDoc->set = false;
	//Invalidate();
	CView::OnLButtonDblClk(nFlags, point);
}
