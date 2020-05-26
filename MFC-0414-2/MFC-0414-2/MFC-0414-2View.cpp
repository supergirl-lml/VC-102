
// MFC-0414-2View.cpp : CMFC04142View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0414-2.h"
#endif

#include "MFC-0414-2Doc.h"
#include "MFC-0414-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"MyDlg.h"

// CMFC04142View

IMPLEMENT_DYNCREATE(CMFC04142View, CView)

BEGIN_MESSAGE_MAP(CMFC04142View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_32771, &CMFC04142View::OnPopout)
END_MESSAGE_MAP()

// CMFC04142View 构造/析构

CMFC04142View::CMFC04142View()
{
	// TODO: 在此处添加构造代码

}

CMFC04142View::~CMFC04142View()
{
}

BOOL CMFC04142View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04142View 绘制

void CMFC04142View::OnDraw(CDC* /*pDC*/)
{
	CMFC04142Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC04142View 诊断

#ifdef _DEBUG
void CMFC04142View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04142View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04142Doc* CMFC04142View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04142Doc)));
	return (CMFC04142Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04142View 消息处理程序


void CMFC04142View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	file = cfd.GetPathName();
	CClientDC dc(this);
	dc.TextOutW(100, 100, file);
	
	CView::OnLButtonDblClk(nFlags, point);
}


void CMFC04142View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg md;
	UpdateData(true);
	md.a=file;
	UpdateData(false);
	int t = md.DoModal();
}
