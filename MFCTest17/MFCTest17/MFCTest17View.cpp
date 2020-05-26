
// MFCTest17View.cpp : CMFCTest17View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest17.h"
#endif

#include "MFCTest17Doc.h"
#include "MFCTest17View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest17View

IMPLEMENT_DYNCREATE(CMFCTest17View, CView)

BEGIN_MESSAGE_MAP(CMFCTest17View, CView)
	ON_COMMAND(ID_32771, &CMFCTest17View::On32771)
	ON_COMMAND(ID_32772, &CMFCTest17View::On32772)
	ON_COMMAND(ID_32773, &CMFCTest17View::OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCTest17View ����/����

CMFCTest17View::CMFCTest17View()
{
	// TODO: �ڴ˴���ӹ������
	a = 0;
	b = 0;
	c = 0;
}

CMFCTest17View::~CMFCTest17View()
{
}

BOOL CMFCTest17View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest17View ����

void CMFCTest17View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest17View ���

#ifdef _DEBUG
void CMFCTest17View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest17View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest17Doc* CMFCTest17View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest17Doc)));
	return (CMFCTest17Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest17View ��Ϣ�������


void CMFCTest17View::On32771()
{
	// TODO: �ڴ���������������
	a = 1;
}


void CMFCTest17View::On32772()
{
	// TODO: �ڴ���������������
	b = 1;
}


void CMFCTest17View::OnEllipse()
{
	// TODO: �ڴ���������������
	c = 1;
}


void CMFCTest17View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_star = point;
	cr.left = point.x;
	cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCTest17View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	npoint = point;
	cr.right = point.x;
	cr.bottom = point.y;
	if (a == 1)
	{
		CClientDC dc(this);
		dc.MoveTo(m_star);
		dc.LineTo(npoint);
		a = 0;
	}
	else if (b == 1)
	{
		CClientDC dc(this);
		dc.Rectangle(cr.left, cr.top, cr.right, cr.bottom);
		b = 0;
	}
	else if (c == 1)
	{
		CClientDC dc(this);
		dc.Ellipse(cr.left, cr.top, cr.right, cr.bottom);
		c = 0;
	}

	CView::OnLButtonUp(nFlags, point);
}
