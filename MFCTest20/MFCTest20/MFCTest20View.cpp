
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
	ON_WM_PAINT()
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
	if (flag == true) {
        img.Draw(pDC->m_hDC, sx, sy, w, h);
	}
	
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
	flag = true;
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)//如果退出对话框时选项为OK的话
	{
	    filename = cfd.GetPathName();
		img.Load(filename);
		CRect cr;
		GetClientRect(&cr);

		float cr_ratio = 1.0 * cr.Width() / cr.Height();
		float img_ratio = 1.0 * img.GetWidth() / img.GetHeight();

		if (cr_ratio > img_ratio)
		{//客户区宽高比大于图像
			h = cr.Height();//图片高度
			w = img_ratio * h;//图片宽度
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