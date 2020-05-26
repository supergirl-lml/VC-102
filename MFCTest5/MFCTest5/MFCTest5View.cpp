
// MFCTest5View.cpp : CMFCTest5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest5.h"
#endif

#include "MFCTest5Doc.h"
#include "MFCTest5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest5View

IMPLEMENT_DYNCREATE(CMFCTest5View, CView)

BEGIN_MESSAGE_MAP(CMFCTest5View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest5View ����/����

CMFCTest5View::CMFCTest5View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(300);

}

CMFCTest5View::~CMFCTest5View()
{
}

BOOL CMFCTest5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest5View ����

void CMFCTest5View::OnDraw(CDC* pDC)
{
	CMFCTest5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest5View ���

#ifdef _DEBUG
void CMFCTest5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest5Doc* CMFCTest5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest5Doc)));
	return (CMFCTest5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest5View ��Ϣ�������


void CMFCTest5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a = rand() % 50 + 10;
	int b = rand() % 50 + 5;
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	CClientDC dc(this);
	GetDC()->Ellipse(cr);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
