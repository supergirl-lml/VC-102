
// MFCTest20View.cpp : CMFCTest20View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest20.h"
#endif

#include "MFCTest20Doc.h"
#include "MFCTest20View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest20View

IMPLEMENT_DYNCREATE(CMFCTest20View, CView)

BEGIN_MESSAGE_MAP(CMFCTest20View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCTest20View::OnFileOpen)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CMFCTest20View ����/����

CMFCTest20View::CMFCTest20View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest20View::~CMFCTest20View()
{
}

BOOL CMFCTest20View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest20View ����

void CMFCTest20View::OnDraw(CDC* pDC)
{
	CMFCTest20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == true) {
        img.Draw(pDC->m_hDC, sx, sy, w, h);
	}
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest20View ���

#ifdef _DEBUG
void CMFCTest20View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest20View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest20Doc* CMFCTest20View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest20Doc)));
	return (CMFCTest20Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest20View ��Ϣ�������


void CMFCTest20View::OnFileOpen()
{
	// TODO: �ڴ���������������
	flag = true;
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)//����˳��Ի���ʱѡ��ΪOK�Ļ�
	{
	    filename = cfd.GetPathName();
		img.Load(filename);
		CRect cr;
		GetClientRect(&cr);

		float cr_ratio = 1.0 * cr.Width() / cr.Height();
		float img_ratio = 1.0 * img.GetWidth() / img.GetHeight();

		if (cr_ratio > img_ratio)
		{//�ͻ�����߱ȴ���ͼ��
			h = cr.Height();//ͼƬ�߶�
			w = img_ratio * h;//ͼƬ���
			sx = (cr.Width() - w) / 2;
			sy = 0;
		}
		else
		{
			w = cr.Width();
			h = w / img_ratio;
			sx = 0;
			sy = (cr.Height() - h) / 2;
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
}