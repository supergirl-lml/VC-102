
// MFCTest1View.cpp : CMFCTest1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest1.h"
#endif

#include "MFCTest1Doc.h"
#include "MFCTest1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest1View

IMPLEMENT_DYNCREATE(CMFCTest1View, CView)

BEGIN_MESSAGE_MAP(CMFCTest1View, CView)
END_MESSAGE_MAP()

// CMFCTest1View ����/����

CMFCTest1View::CMFCTest1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest1View::~CMFCTest1View()
{
}

BOOL CMFCTest1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest1View ����

void CMFCTest1View::OnDraw(CDC* pDC)
{
	CMFCTest1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString S = _T("����������");
	pDC->TextOutW(300, 200, S);
	int A = 0;
	CString a;
	a.Format(_T("201812300102"), A);
	pDC->TextOutW(400, 200, a);
}


// CMFCTest1View ���

#ifdef _DEBUG
void CMFCTest1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest1Doc* CMFCTest1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest1Doc)));
	return (CMFCTest1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest1View ��Ϣ�������
