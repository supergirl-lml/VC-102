
// MFCTest15View.cpp : CMFCTest15View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest15.h"
#endif

#include "MFCTest15Doc.h"
#include "MFCTest15View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest15View

IMPLEMENT_DYNCREATE(CMFCTest15View, CView)

BEGIN_MESSAGE_MAP(CMFCTest15View, CView)
	ON_COMMAND(ID_32771, &CMFCTest15View::On32771)
END_MESSAGE_MAP()

// CMFCTest15View ����/����

CMFCTest15View::CMFCTest15View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest15View::~CMFCTest15View()
{
}

BOOL CMFCTest15View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest15View ����

void CMFCTest15View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest15View ���

#ifdef _DEBUG
void CMFCTest15View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest15View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest15Doc* CMFCTest15View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest15Doc)));
	return (CMFCTest15Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest15View ��Ϣ�������


void CMFCTest15View::On32771()
{
	// TODO: �ڴ���������������
	CString s = _T("������");
	CClientDC dc(this);
	dc.TextOutW(150, 100, s);
}
