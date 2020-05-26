
// MFC-0421-1View.cpp : CMFC04211View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC-0421-1.h"
#endif

#include "MFC-0421-1Doc.h"
#include "MFC-0421-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include<fstream>
#include<iostream>
using namespace std;

// CMFC04211View

IMPLEMENT_DYNCREATE(CMFC04211View, CView)

BEGIN_MESSAGE_MAP(CMFC04211View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFC04211View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CMFC04211View::OnFileSaveAs)
END_MESSAGE_MAP()

// CMFC04211View ����/����

CMFC04211View::CMFC04211View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC04211View::~CMFC04211View()
{
}

BOOL CMFC04211View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC04211View ����

void CMFC04211View::OnDraw(CDC* /*pDC*/)
{
	CMFC04211Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC04211View ���

#ifdef _DEBUG
void CMFC04211View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04211View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04211Doc* CMFC04211View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04211Doc)));
	return (CMFC04211Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04211View ��Ϣ�������


void CMFC04211View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
		filename = cfd.GetPathName();
		ifstream ifs(filename);
		CClientDC dc(this);
		dc.TextOutW(200, 300, filename);
	}
}


void CMFC04211View::OnFileSaveAs()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK) {
		ofstream ofs(cfd.GetPathName());
		ofs << CT2A(filename.GetString()) << endl;
	}
}
