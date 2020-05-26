
// MFCTest16View.cpp : CMFCTest16View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest16.h"
#endif

#include "MFCTest16Doc.h"
#include "MFCTest16View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest16View

IMPLEMENT_DYNCREATE(CMFCTest16View, CView)

BEGIN_MESSAGE_MAP(CMFCTest16View, CView)
END_MESSAGE_MAP()

// CMFCTest16View ����/����

CMFCTest16View::CMFCTest16View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFCTest16View::~CMFCTest16View()
{
}

BOOL CMFCTest16View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest16View ����

void CMFCTest16View::OnDraw(CDC* pDC)
{
	CMFCTest16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CMFCTest16View ���

#ifdef _DEBUG
void CMFCTest16View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest16View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest16Doc* CMFCTest16View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest16Doc)));
	return (CMFCTest16Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest16View ��Ϣ�������
