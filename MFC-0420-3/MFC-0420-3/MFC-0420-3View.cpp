
// MFC-0420-3View.cpp : CMFC04203View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0420-3.h"
#endif

#include "MFC-0420-3Doc.h"
#include "MFC-0420-3View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC04203View

IMPLEMENT_DYNCREATE(CMFC04203View, CView)

BEGIN_MESSAGE_MAP(CMFC04203View, CView)
	ON_COMMAND(ID_32771, &CMFC04203View::OnPopout)
END_MESSAGE_MAP()

// CMFC04203View 构造/析构

CMFC04203View::CMFC04203View()
{
	// TODO: 在此处添加构造代码

}

CMFC04203View::~CMFC04203View()
{
}

BOOL CMFC04203View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04203View 绘制

void CMFC04203View::OnDraw(CDC* /*pDC*/)
{
	CMFC04203Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC04203View 诊断

#ifdef _DEBUG
void CMFC04203View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04203View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04203Doc* CMFC04203View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04203Doc)));
	return (CMFC04203Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04203View 消息处理程序


void CMFC04203View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg md;
	int r = md.DoModal();
	if (r == IDOK)
	{
		//CClientDC dc(this);
		int X, Y, A, B;
		X = md.x;
		Y = md.y;
		A = md.a;
		B = md.b;
		CRect cr(X - A, Y - B, X + A, Y + B);
		GetDC()->Ellipse(cr);
	}
}
