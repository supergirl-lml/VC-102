
// MFC-0407-1View.cpp : CMFC04071View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0407-1.h"
#endif

#include "MFC-0407-1Doc.h"
#include "MFC-0407-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"MyDlg.h"

// CMFC04071View

IMPLEMENT_DYNCREATE(CMFC04071View, CView)

BEGIN_MESSAGE_MAP(CMFC04071View, CView)
	ON_COMMAND(ID_32771, &CMFC04071View::OnPopout)
END_MESSAGE_MAP()

// CMFC04071View ����/����

CMFC04071View::CMFC04071View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04071View::~CMFC04071View()
{
}

BOOL CMFC04071View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04071View ����

void CMFC04071View::OnDraw(CDC* /*pDC*/)
{
	CMFC04071Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04071View ���

#ifdef _DEBUG
void CMFC04071View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04071View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04071Doc* CMFC04071View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04071Doc)));
	return (CMFC04071Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04071View ��Ϣ�������


void CMFC04071View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t != IDOK)
	{
		CClientDC dc(this);
		CString s = _T("�����˳��Ի���");
		dc.TextOutW(100, 100, s);
	}
}
