
// MFC-0225-1View.cpp : CMFC02251View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0225-1.h"
#endif

#include "MFC-0225-1Doc.h"
#include "MFC-0225-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC02251View

IMPLEMENT_DYNCREATE(CMFC02251View, CView)

BEGIN_MESSAGE_MAP(CMFC02251View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC02251View ����/����

CMFC02251View::CMFC02251View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC02251View::~CMFC02251View()
{
}

BOOL CMFC02251View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC02251View ����

void CMFC02251View::OnDraw(CDC* /*pDC*/)
{
	CMFC02251Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC02251View ���

#ifdef _DEBUG
void CMFC02251View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC02251View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC02251Doc* CMFC02251View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC02251Doc)));
	return (CMFC02251Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC02251View ��Ϣ�������


void CMFC02251View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFC02251Doc* pDoc = GetDocument();
	CClientDC dc(this);
    dc.TextOutW(300, 200, pDoc->name);
	CView::OnLButtonDown(nFlags, point);
}
