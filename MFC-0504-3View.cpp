
// MFC-0504-3View.cpp : CMFC05043View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0504-3.h"
#endif

#include "MFC-0504-3Doc.h"
#include "MFC-0504-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"Lib3.h"

// CMFC05043View

IMPLEMENT_DYNCREATE(CMFC05043View, CView)

BEGIN_MESSAGE_MAP(CMFC05043View, CView)
END_MESSAGE_MAP()

// CMFC05043View ����/����

CMFC05043View::CMFC05043View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC05043View::~CMFC05043View()
{
}

BOOL CMFC05043View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC05043View ����

void CMFC05043View::OnDraw(CDC* pDC)
{
	CMFC05043Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	CString ss;
	int num1 = factorial(5);
	float num2 = FAC().convert(30.0);
	s.Format(_T("���5�Ľ׳ˣ�%d"), num1); 
	ss.Format(_T("����Ƕ�Ϊ30.0�Ļ��ȣ�%f"), num2);
	pDC->TextOutW(200, 150, s);
	pDC->TextOutW(200, 200, ss);
}


// CMFC05043View ���

#ifdef _DEBUG
void CMFC05043View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC05043View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC05043Doc* CMFC05043View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC05043Doc)));
	return (CMFC05043Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC05043View ��Ϣ�������
