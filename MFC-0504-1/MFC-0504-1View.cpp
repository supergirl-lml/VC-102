
// MFC-0504-1View.cpp : CMFC05041View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0504-1.h"
#endif

#include "MFC-0504-1Doc.h"
#include "MFC-0504-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"

// CMFC05041View

IMPLEMENT_DYNCREATE(CMFC05041View, CView)

BEGIN_MESSAGE_MAP(CMFC05041View, CView)
END_MESSAGE_MAP()

// CMFC05041View ����/����

CMFC05041View::CMFC05041View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC05041View::~CMFC05041View()
{
}

BOOL CMFC05041View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC05041View ����

void CMFC05041View::OnDraw(CDC* pDC)
{
	CMFC05041Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int num=factorial(5);
	CString s;
	s.Format(_T("%d"), num);
	pDC->TextOutW(200, 150, s);
}


// CMFC05041View ���

#ifdef _DEBUG
void CMFC05041View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC05041View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC05041Doc* CMFC05041View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC05041Doc)));
	return (CMFC05041Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC05041View ��Ϣ�������
