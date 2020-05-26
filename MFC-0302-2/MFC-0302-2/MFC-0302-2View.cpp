
// MFC-0302-2View.cpp : CMFC03022View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0302-2.h"
#endif

#include "MFC-0302-2Doc.h"
#include "MFC-0302-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03022View

IMPLEMENT_DYNCREATE(CMFC03022View, CView)

BEGIN_MESSAGE_MAP(CMFC03022View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC03022View ����/����

CMFC03022View::CMFC03022View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC03022View::~CMFC03022View()
{
}

BOOL CMFC03022View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC03022View ����

void CMFC03022View::OnDraw(CDC* pDC)
{
	CMFC03022Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	pDC->Ellipse(cr);
}


// CMFC03022View ���

#ifdef _DEBUG
void CMFC03022View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03022View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03022Doc* CMFC03022View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03022Doc)));
	return (CMFC03022Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03022View ��Ϣ�������


void CMFC03022View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int x = point.x;
	int y = point.y;
	int r = rand() % 100;
	cr.right = x + r;
	cr.top = y+r;
	cr.left = x-r;
	cr.bottom = y-r;
    GetDC()->Ellipse(cr);
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
