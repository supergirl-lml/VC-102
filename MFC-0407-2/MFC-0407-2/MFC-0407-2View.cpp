
// MFC-0407-2View.cpp : CMFC04072View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0407-2.h"
#endif

#include "MFC-0407-2Doc.h"
#include "MFC-0407-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"MyDlg.h"

// CMFC04072View

IMPLEMENT_DYNCREATE(CMFC04072View, CView)

BEGIN_MESSAGE_MAP(CMFC04072View, CView)
	ON_COMMAND(ID_32771, &CMFC04072View::OnPopout)
END_MESSAGE_MAP()

// CMFC04072View ����/����

CMFC04072View::CMFC04072View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04072View::~CMFC04072View()
{
}

BOOL CMFC04072View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04072View ����

void CMFC04072View::OnDraw(CDC* /*pDC*/)
{
	CMFC04072Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04072View ���

#ifdef _DEBUG
void CMFC04072View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04072View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04072Doc* CMFC04072View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04072Doc)));
	return (CMFC04072Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04072View ��Ϣ�������


void CMFC04072View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();

}
