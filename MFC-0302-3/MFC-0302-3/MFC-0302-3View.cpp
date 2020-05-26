
// MFC-0302-3View.cpp : CMFC03023View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0302-3.h"
#endif

#include "MFC-0302-3Doc.h"
#include "MFC-0302-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03023View

IMPLEMENT_DYNCREATE(CMFC03023View, CView)

BEGIN_MESSAGE_MAP(CMFC03023View, CView)
END_MESSAGE_MAP()

// CMFC03023View ����/����

CMFC03023View::CMFC03023View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC03023View::~CMFC03023View()
{
}

BOOL CMFC03023View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC03023View ����

void CMFC03023View::OnDraw(CDC* pDC)
{
	CMFC03023Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	GetClientRect(&cr);
	pDC->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC03023View ���

#ifdef _DEBUG
void CMFC03023View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03023View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03023Doc* CMFC03023View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03023Doc)));
	return (CMFC03023Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03023View ��Ϣ�������
