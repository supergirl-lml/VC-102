
// MFCTest6View.cpp : CMFCTest6View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest6.h"
#endif

#include "MFCTest6Doc.h"
#include "MFCTest6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest6View

IMPLEMENT_DYNCREATE(CMFCTest6View, CView)

BEGIN_MESSAGE_MAP(CMFCTest6View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCTest6View ����/����

CMFCTest6View::CMFCTest6View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest6View::~CMFCTest6View()
{
}

BOOL CMFCTest6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest6View ����

void CMFCTest6View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest6View ���

#ifdef _DEBUG
void CMFCTest6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest6Doc* CMFCTest6View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest6Doc)));
	return (CMFCTest6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest6View ��Ϣ�������


void CMFCTest6View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//CMFCTest3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s=_T("�����������");
	dc.TextOutW(100, 100, s);
	CView::OnLButtonDown(nFlags, point);
}


void CMFCTest6View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("�������̧��");
	dc.TextOutW(100, 200, s);
	CView::OnLButtonUp(nFlags, point);
}
