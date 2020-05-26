
// MFCTest3View.cpp : CMFCTest3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest3.h"
#endif

#include "MFCTest3Doc.h"
#include "MFCTest3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest3View

IMPLEMENT_DYNCREATE(CMFCTest3View, CView)

BEGIN_MESSAGE_MAP(CMFCTest3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest3View ����/����

CMFCTest3View::CMFCTest3View()
{
	// TODO: �ڴ˴���ӹ������
    count = 0;

}

CMFCTest3View::~CMFCTest3View()
{
}

BOOL CMFCTest3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest3View ����

void CMFCTest3View::OnDraw(CDC* pDC)
{
	CMFCTest3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

}


// CMFCTest3View ���

#ifdef _DEBUG
void CMFCTest3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest3Doc* CMFCTest3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest3Doc)));
	return (CMFCTest3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest3View ��Ϣ�������


void CMFCTest3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest3Doc* pDoc = GetDocument();
	pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCTest3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("count=%d"), pDoc->count);
	dc.TextOutW(100,100,s);
	CView::OnRButtonDown(nFlags, point);
}
