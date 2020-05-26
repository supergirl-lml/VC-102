
// MFC-0225-2View.cpp : CMFC02252View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0225-2.h"
#endif

#include "MFC-0225-2Doc.h"
#include "MFC-0225-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC02252View

IMPLEMENT_DYNCREATE(CMFC02252View, CView)

BEGIN_MESSAGE_MAP(CMFC02252View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC02252View ����/����

CMFC02252View::CMFC02252View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC02252View::~CMFC02252View()
{
}

BOOL CMFC02252View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC02252View ����

void CMFC02252View::OnDraw(CDC* /*pDC*/)
{
	CMFC02252Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC02252View ���

#ifdef _DEBUG
void CMFC02252View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC02252View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC02252Doc* CMFC02252View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC02252Doc)));
	return (CMFC02252Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC02252View ��Ϣ�������


void CMFC02252View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC02252Doc* pDoc = GetDocument();

	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC02252View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC02252Doc* pDoc = GetDocument();

	CClientDC dc(this);

	CString s;

	s.Format(_T("count=%d"), pDoc->count);

	dc.TextOutW(100, 100, s);

	CView::OnRButtonDown(nFlags, point);
}
