
// MFCTest10View.cpp : CMFCTest10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest10.h"
#endif

#include "MFCTest10Doc.h"
#include "MFCTest10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest10View

IMPLEMENT_DYNCREATE(CMFCTest10View, CView)

BEGIN_MESSAGE_MAP(CMFCTest10View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCTest10View ����/����

CMFCTest10View::CMFCTest10View()
{
	// TODO: �ڴ˴���ӹ������
	count = 0;
	sign = 0;
}

CMFCTest10View::~CMFCTest10View()
{
}

BOOL CMFCTest10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest10View ����

void CMFCTest10View::OnDraw(CDC* pDC)
{
	CMFCTest10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest10View ���

#ifdef _DEBUG
void CMFCTest10View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest10Doc* CMFCTest10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest10Doc)));
	return (CMFCTest10Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest10View ��Ϣ�������


void CMFCTest10View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest10Doc* pDoc = GetDocument();
	GetCapture();
	pDoc->x = point.x;
	pDoc->y = point.y;
	sign = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCTest10View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest10Doc* pDoc = GetDocument();
	if (sign == 1)
		count++;
	CClientDC dc(this);
	CString s;
	s.Format(_T("�ƶ�������%d"), count);
    dc.TextOutW(20, 20, s);
	CView::OnMouseMove(nFlags, point);
}


void CMFCTest10View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest10Doc* pDoc = GetDocument();

	ASSERT_VALID(pDoc);

	if (!pDoc)
		return;
	sign = 0;
	ReleaseCapture();
	CClientDC dc(this);
	int num;
	int sum = 0;
	sum += point.x - pDoc->x;
	num = sum;
	CString a;
	a.Format(_T("ÿ�κ����ƶ�%d������"), num);
	dc.TextOutW(200, 20, a);
	CView::OnLButtonUp(nFlags, point);
}
