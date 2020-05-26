
// MFCTest9View.cpp : CMFCTest9View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest9.h"
#endif

#include "MFCTest9Doc.h"
#include "MFCTest9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest9View

IMPLEMENT_DYNCREATE(CMFCTest9View, CView)

BEGIN_MESSAGE_MAP(CMFCTest9View, CView)
	ON_WM_LBUTTONDOWN()
//	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCTest9View ����/����

CMFCTest9View::CMFCTest9View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest9View::~CMFCTest9View()
{
}

BOOL CMFCTest9View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest9View ����

void CMFCTest9View::OnDraw(CDC* pDC)
{
	CMFCTest9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest9View ���

#ifdef _DEBUG
void CMFCTest9View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest9View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest9Doc* CMFCTest9View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest9Doc)));
	return (CMFCTest9Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest9View ��Ϣ�������


void CMFCTest9View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x1 = point.x;
	y1 = point.y;

	CView::OnLButtonDown(nFlags, point);
}



void CMFCTest9View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("����λ���ǣ�(%d,%d)"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s);
	CView::OnMouseMove(nFlags, point);
}


void CMFCTest9View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr(x1, y1, point.x, point.y);
	CClientDC dc(this);
	dc.Rectangle(cr);

	CView::OnLButtonUp(nFlags, point);
}
