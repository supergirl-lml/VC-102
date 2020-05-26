
// MFCTest7View.cpp : CMFCTest7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest7.h"
#endif

#include "MFCTest7Doc.h"
#include "MFCTest7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest7View

IMPLEMENT_DYNCREATE(CMFCTest7View, CView)

BEGIN_MESSAGE_MAP(CMFCTest7View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest7View ����/����

CMFCTest7View::CMFCTest7View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest7View::~CMFCTest7View()
{
}

BOOL CMFCTest7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest7View ����

void CMFCTest7View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest7View ���

#ifdef _DEBUG
void CMFCTest7View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest7Doc* CMFCTest7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest7Doc)));
	return (CMFCTest7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest7View ��Ϣ�������


void CMFCTest7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest7Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	int num = (pDoc->A )+(pDoc-> B);
	s.Format(_T("A+B=%d"),num);
	dc.TextOutW(100, 100, s);
	CView::OnLButtonDown(nFlags, point);
}
