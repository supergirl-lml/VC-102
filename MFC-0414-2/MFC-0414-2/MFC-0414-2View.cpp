
// MFC-0414-2View.cpp : CMFC04142View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0414-2.h"
#endif

#include "MFC-0414-2Doc.h"
#include "MFC-0414-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"MyDlg.h"

// CMFC04142View

IMPLEMENT_DYNCREATE(CMFC04142View, CView)

BEGIN_MESSAGE_MAP(CMFC04142View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_32771, &CMFC04142View::OnPopout)
END_MESSAGE_MAP()

// CMFC04142View ����/����

CMFC04142View::CMFC04142View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04142View::~CMFC04142View()
{
}

BOOL CMFC04142View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04142View ����

void CMFC04142View::OnDraw(CDC* /*pDC*/)
{
	CMFC04142Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04142View ���

#ifdef _DEBUG
void CMFC04142View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04142View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04142Doc* CMFC04142View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04142Doc)));
	return (CMFC04142Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04142View ��Ϣ�������


void CMFC04142View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	file = cfd.GetPathName();
	CClientDC dc(this);
	dc.TextOutW(100, 100, file);
	
	CView::OnLButtonDblClk(nFlags, point);
}


void CMFC04142View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg md;
	UpdateData(true);
	md.a=file;
	UpdateData(false);
	int t = md.DoModal();
}
