
// MFCTest11View.cpp : CMFCTest11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest11.h"
#endif

#include "MFCTest11Doc.h"
#include "MFCTest11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest11View

IMPLEMENT_DYNCREATE(CMFCTest11View, CView)

BEGIN_MESSAGE_MAP(CMFCTest11View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest11View ����/����

CMFCTest11View::CMFCTest11View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest11View::~CMFCTest11View()
{
}

BOOL CMFCTest11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest11View ����

void CMFCTest11View::OnDraw(CDC* pDC)
{
	CMFCTest11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->Rectangle(pDoc->m_crlRect);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest11View ���

#ifdef _DEBUG
void CMFCTest11View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest11Doc* CMFCTest11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest11Doc)));
	return (CMFCTest11Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest11View ��Ϣ�������


void CMFCTest11View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest11Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_crlRect.left > 0);
		{
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->m_crlRect.top <= (clientRec.bottom - clientRec.top))
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_crlRect.bottom >= (clientRec.top - clientRec.bottom))
		{
			pDoc->m_crlRect.top += 5;
			pDoc->m_crlRect.bottom += 5;
		}
		break;
	case VK_HOME:
		if (pDoc->m_crlRect.left > 0 && pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.left -= 5;
		}
		break;
	case VK_END:
		if (pDoc->m_crlRect.left > 0 && pDoc->m_crlRect.right > clientRec.left) 
		{
			pDoc->m_crlRect.right += 5;
			pDoc->m_crlRect.bottom  += 5;
		}
	}
	InvalidateRect(NULL, TRUE);
    CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFCTest11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest11Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	pDoc->m_crlRect.left = 400; 
	pDoc->m_crlRect.top = 200;
	pDoc->m_crlRect.right = 500; 
	pDoc->m_crlRect.bottom = 300;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
