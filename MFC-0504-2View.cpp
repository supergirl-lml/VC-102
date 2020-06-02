
// MFC-0504-2View.cpp : CMFC05042View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0504-2.h"
#endif

#include "MFC-0504-2Doc.h"
#include "MFC-0504-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"W32.h"

// CMFC05042View

IMPLEMENT_DYNCREATE(CMFC05042View, CView)

BEGIN_MESSAGE_MAP(CMFC05042View, CView)
END_MESSAGE_MAP()

// CMFC05042View ����/����

CMFC05042View::CMFC05042View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC05042View::~CMFC05042View()
{
}

BOOL CMFC05042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC05042View ����

void CMFC05042View::OnDraw(CDC* pDC)
{
	CMFC05042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	float num = FAC().convert(30.0);
	CString s;
	s.Format(_T("%f"), num); ;
	pDC->TextOutW(200, 200, s);
}


// CMFC05042View ���

#ifdef _DEBUG
void CMFC05042View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC05042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC05042Doc* CMFC05042View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC05042Doc)));
	return (CMFC05042Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC05042View ��Ϣ�������
