
// MFC-0420-3View.cpp : CMFC04203View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0420-3.h"
#endif

#include "MFC-0420-3Doc.h"
#include "MFC-0420-3View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04203View

IMPLEMENT_DYNCREATE(CMFC04203View, CView)

BEGIN_MESSAGE_MAP(CMFC04203View, CView)
	ON_COMMAND(ID_32771, &CMFC04203View::OnPopout)
END_MESSAGE_MAP()

// CMFC04203View ����/����

CMFC04203View::CMFC04203View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04203View::~CMFC04203View()
{
}

BOOL CMFC04203View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04203View ����

void CMFC04203View::OnDraw(CDC* /*pDC*/)
{
	CMFC04203Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04203View ���

#ifdef _DEBUG
void CMFC04203View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04203View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04203Doc* CMFC04203View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04203Doc)));
	return (CMFC04203Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04203View ��Ϣ�������


void CMFC04203View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg md;
	int r = md.DoModal();
	if (r == IDOK)
	{
		//CClientDC dc(this);
		int X, Y, A, B;
		X = md.x;
		Y = md.y;
		A = md.a;
		B = md.b;
		CRect cr(X - A, Y - B, X + A, Y + B);
		GetDC()->Ellipse(cr);
	}
}
