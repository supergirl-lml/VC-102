
// MFC-0414-1View.cpp : CMFC04141View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0414-1.h"
#endif

#include "MFC-0414-1Doc.h"
#include "MFC-0414-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04141View

IMPLEMENT_DYNCREATE(CMFC04141View, CView)

BEGIN_MESSAGE_MAP(CMFC04141View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC04141View ����/����

CMFC04141View::CMFC04141View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04141View::~CMFC04141View()
{
}

BOOL CMFC04141View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04141View ����

void CMFC04141View::OnDraw(CDC* /*pDC*/)
{
	CMFC04141Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04141View ���

#ifdef _DEBUG
void CMFC04141View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04141View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04141Doc* CMFC04141View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04141Doc)));
	return (CMFC04141Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04141View ��Ϣ�������


void CMFC04141View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	cfd.GetPathName();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString file = cfd.GetPathName();
		dc.TextOutW(100, 100, file);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
