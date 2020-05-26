
// MFC-0302-4View.cpp : CMFC03024View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0302-4.h"
#endif

#include "MFC-0302-4Doc.h"
#include "MFC-0302-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03024View

IMPLEMENT_DYNCREATE(CMFC03024View, CView)

BEGIN_MESSAGE_MAP(CMFC03024View, CView)
END_MESSAGE_MAP()

// CMFC03024View ����/����

CMFC03024View::CMFC03024View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC03024View::~CMFC03024View()
{
}

BOOL CMFC03024View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC03024View ����

void CMFC03024View::OnDraw(CDC* pDC)
{
	CMFC03024Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int color=RGB(100, 220, 150);
	CClientDC dc(this);
	CRect cr;
	CBrush newBrush;
	newBrush.CreateSolidBrush(color);
	dc.SelectObject(&newBrush);
	GetClientRect(&cr);
	dc.Ellipse(cr);
	DeleteObject(newBrush);
}


// CMFC03024View ���

#ifdef _DEBUG
void CMFC03024View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03024View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03024Doc* CMFC03024View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03024Doc)));
	return (CMFC03024Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03024View ��Ϣ�������
