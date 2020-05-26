
// MFCTest19View.cpp : CMFCTest19View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CMFCTest19View 构造/析构

CMFCTest19View::CMFCTest19View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest19View::~CMFCTest19View()
{
}

BOOL CMFCTest19View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest19View 绘制

void CMFCTest19View::OnDraw(CDC* /*pDC*/)
{
	CMFCTest19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest19View 诊断

#ifdef _DEBUG
void CMFCTest19View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest19View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest19Doc* CMFCTest19View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest19Doc)));
	return (CMFCTest19Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest19View 消息处理程序


void CMFCTest19View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	    CFileDialog cfd(true);  //建立对象
		int r = cfd.DoModal(); // 弹出对话框
		CClientDC dc(this);

		if (r == IDOK)//如果退出对话框时选项为OK的话
		{
			CString filename = cfd.GetPathName();
			CImage img;
			img.Load(filename);
			int sx, sy, w, h;//图片左上角点的位置和宽高
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
