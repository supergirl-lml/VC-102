
// MFC-0413-4View.cpp : CMFC04134View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0413-4.h"
#endif

#include "MFC-0413-4Doc.h"
#include "MFC-0413-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"MyDlg.h"

// CMFC04134View

IMPLEMENT_DYNCREATE(CMFC04134View, CView)

BEGIN_MESSAGE_MAP(CMFC04134View, CView)
	ON_COMMAND(ID_32771, &CMFC04134View::OnPopout)
END_MESSAGE_MAP()

// CMFC04134View ����/����

CMFC04134View::CMFC04134View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04134View::~CMFC04134View()
{
}

BOOL CMFC04134View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04134View ����

void CMFC04134View::OnDraw(CDC* /*pDC*/)
{
	CMFC04134Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04134View ���

#ifdef _DEBUG
void CMFC04134View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04134View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04134Doc* CMFC04134View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04134Doc)));
	return (CMFC04134Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04134View ��Ϣ�������


void CMFC04134View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
}
