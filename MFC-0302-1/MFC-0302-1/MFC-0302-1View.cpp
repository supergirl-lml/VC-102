
// MFC-0302-1View.cpp : CMFC03021View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0302-1.h"
#endif

#include "MFC-0302-1Doc.h"
#include "MFC-0302-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03021View

IMPLEMENT_DYNCREATE(CMFC03021View, CView)

BEGIN_MESSAGE_MAP(CMFC03021View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC03021View ����/����

CMFC03021View::CMFC03021View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC03021View::~CMFC03021View()
{
}

BOOL CMFC03021View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC03021View ����

void CMFC03021View::OnDraw(CDC* /*pDC*/)
{
	CMFC03021Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC03021View ���

#ifdef _DEBUG
void CMFC03021View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03021View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03021Doc* CMFC03021View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03021Doc)));
	return (CMFC03021Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03021View ��Ϣ�������


void CMFC03021View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int x = point.x;
	int y = point.y;
	int r = rand() % 100;
	CClientDC dc(this);
	CRect cr(x+r,y+r,x-r,y-r);
	dc.Ellipse(cr);

	CView::OnLButtonDown(nFlags, point);
}
