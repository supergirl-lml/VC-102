
// MFC-0414-3View.cpp : CMFC04143View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0414-3.h"
#endif

#include "MFC-0414-3Doc.h"
#include "MFC-0414-3View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04143View

IMPLEMENT_DYNCREATE(CMFC04143View, CView)

BEGIN_MESSAGE_MAP(CMFC04143View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_32771, &CMFC04143View::On32771)
END_MESSAGE_MAP()

// CMFC04143View ����/����

CMFC04143View::CMFC04143View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04143View::~CMFC04143View()
{
}

BOOL CMFC04143View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04143View ����

void CMFC04143View::OnDraw(CDC* /*pDC*/)
{
	CMFC04143Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04143View ���

#ifdef _DEBUG
void CMFC04143View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04143View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04143Doc* CMFC04143View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04143Doc)));
	return (CMFC04143Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04143View ��Ϣ�������


void CMFC04143View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	file = cfd.GetPathName();
	CClientDC dc(this);
	dc.TextOutW(100, 100, file);
	CView::OnLButtonDblClk(nFlags, point);
}


void CMFC04143View::On32771()
{
	// TODO: �ڴ���������������
	MyDlg md;
	UpdateData(true);
	md.a=file;
	UpdateData(false);
	int t = md.DoModal();
	if (t == IDOK) {
	}
}
