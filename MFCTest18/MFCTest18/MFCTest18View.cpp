
// MFCTest18View.cpp : CMFCTest18View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest18.h"
#endif

#include "MFCTest18Doc.h"
#include "MFCTest18View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest18View

IMPLEMENT_DYNCREATE(CMFCTest18View, CView)

BEGIN_MESSAGE_MAP(CMFCTest18View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCTest18View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCTest18View ����/����

CMFCTest18View::CMFCTest18View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest18View::~CMFCTest18View()
{
}

BOOL CMFCTest18View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest18View ����

void CMFCTest18View::OnDraw(CDC* pDC)
{
	CMFCTest18Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest18View ���

#ifdef _DEBUG
void CMFCTest18View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest18View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest18Doc* CMFCTest18View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest18Doc)));
	return (CMFCTest18Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest18View ��Ϣ�������


void CMFCTest18View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);  //��������
	int r = cfd.DoModal(); // �����Ի���
	CClientDC dc(this);
	
	if (r == IDOK)//����˳��Ի���ʱѡ��ΪOK�Ļ�
    {   
		CString filename = cfd.GetPathName();
		dc.TextOutW(200, 200, filename);
	}

}
