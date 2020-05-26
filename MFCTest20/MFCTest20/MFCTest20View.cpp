
// MFCTest20View.cpp : CMFCTest20View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
END_MESSAGE_MAP()

// CMFCTest20View 构造/析构

CMFCTest20View::CMFCTest20View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest20View::~CMFCTest20View()
{
}

BOOL CMFCTest20View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest20View 绘制

void CMFCTest20View::OnDraw(CDC* pDC)
{
	CMFCTest20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	/*CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(img);
	pDC->BitBlt(img_w,img_h,0,0,&MemDC, 0,0,SRCCOPY);*/
	//img.Draw(pDC->m_hDC, 0, 0, img_w, img_h);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest20View 诊断

#ifdef _DEBUG
void CMFCTest20View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest20View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest20Doc* CMFCTest20View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest20Doc)));
	return (CMFCTest20Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest20View 消息处理程序


void CMFCTest20View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		//CImage img;
		img.Load(filename);
		//int rect_w, rect_h;//客户区宽高
		//int img_w, img_h;
	//	int sx, sy;//图片位置

		CRect rect;
		GetClientRect(&rect);//获取客户区大小
		rect_w = rect.Width();
		rect_h = rect.Height();

		img_w = img.GetWidth();
		img_h = img.GetHeight();
		if (img_w < rect_w & img_h < rect_h)
		{
			sx = (rect_w - img_w) / 2;
			sy = (rect_h - img_h) / 2;
			
		}
		else {
			
			float rect_ratio = 1.0*rect.Width() / rect.Height();//客户区宽高比
			float img_ratio = 1.0*img.GetWidth() / img.GetHeight();//图像宽高比

			if (rect_ratio > img_ratio)
			{
				img_h = rect.Height();
			    img_w = img_ratio*img_h;
			    sx = (rect.Width() - img_w) / 2;
			    sy = 0;
			}
			else
			{
			img_w = rect.Width();
			img_h = img_w / img_ratio;
			sx = 0;
			sy = (rect.Height() - img_h) / 2;
			}
		}
		img.Draw(dc.m_hDC, sx, sy, img_w,img_h);
		}
	//InvalidateRect(NULL, TRUE);
	}
