
// MFCTest24View.cpp : CMFCTest24View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest24.h"
#endif

#include "MFCTest24Doc.h"
#include "MFCTest24View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest24View

IMPLEMENT_DYNCREATE(CMFCTest24View, CView)

BEGIN_MESSAGE_MAP(CMFCTest24View, CView)
	ON_COMMAND(ID_32771, &CMFCTest24View::OnMultiple)
END_MESSAGE_MAP()

// CMFCTest24View ����/����

CMFCTest24View::CMFCTest24View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest24View::~CMFCTest24View()
{
}

BOOL CMFCTest24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest24View ����

void CMFCTest24View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest24View ���

#ifdef _DEBUG
void CMFCTest24View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest24Doc* CMFCTest24View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest24Doc)));
	return (CMFCTest24Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest24View ��Ϣ�������


void CMFCTest24View::OnMultiple()
{
	// TODO: �ڴ���������������
	MyDlg md;
	int r=md.DoModal();
	if (r == IDOK) {
		int A, D, C;
		A = md.a;
		D = md.d;
		C = md.c;
		
	}
	

}
