
// MFCTest19View.cpp : CMFCTest19View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest19.h"
#endif

#include "MFCTest19Doc.h"
#include "MFCTest19View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest19View

IMPLEMENT_DYNCREATE(CMFCTest19View, CView)

BEGIN_MESSAGE_MAP(CMFCTest19View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCTest19View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCTest19View ����/����

CMFCTest19View::CMFCTest19View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCTest19View::~CMFCTest19View()
{
}

BOOL CMFCTest19View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest19View ����

void CMFCTest19View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCTest19View ���

#ifdef _DEBUG
void CMFCTest19View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest19View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest19Doc* CMFCTest19View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest19Doc)));
	return (CMFCTest19Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest19View ��Ϣ�������


void CMFCTest19View::OnFileOpen()
{
	// TODO: �ڴ���������������
	    CFileDialog cfd(true);  //��������
		int r = cfd.DoModal(); // �����Ի���
		CClientDC dc(this);

		if (r == IDOK)//����˳��Ի���ʱѡ��ΪOK�Ļ�
		{
			CString filename = cfd.GetPathName();
			CImage img;
			img.Load(filename);
			int sx, sy, w, h;//ͼƬ���Ͻǵ��λ�úͿ��
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
