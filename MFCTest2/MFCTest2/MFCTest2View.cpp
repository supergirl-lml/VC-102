
// MFCTest2View.cpp : CMFCTest2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest2.h"
#endif

#include "MFCTest2Doc.h"
#include "MFCTest2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest2View

IMPLEMENT_DYNCREATE(CMFCTest2View, CView)

BEGIN_MESSAGE_MAP(CMFCTest2View, CView)
END_MESSAGE_MAP()

// CMFCTest2View ����/����

CMFCTest2View::CMFCTest2View()
{
	// TODO: �ڴ˴���ӹ������
	int A = 0;

}

CMFCTest2View::~CMFCTest2View()
{
}

BOOL CMFCTest2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest2View ����

void CMFCTest2View::OnDraw(CDC* pDC)
{
	CMFCTest2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(300, 200, pDoc->S);
	CString a;
	a.Format(_T("102"), pDoc->A);
	pDC->TextOutW(400, 200, a);
}


// CMFCTest2View ���

#ifdef _DEBUG
void CMFCTest2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest2Doc* CMFCTest2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest2Doc)));
	return (CMFCTest2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest2View ��Ϣ�������
