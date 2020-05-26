
// MFC-0413-4View.cpp : CMFC04134View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0413-4.h"
#endif

#include "MFC-0413-4Doc.h"
#include "MFC-0413-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"MyDlg.h"

// CMFC04134View

IMPLEMENT_DYNCREATE(CMFC04134View, CView)

BEGIN_MESSAGE_MAP(CMFC04134View, CView)
	ON_COMMAND(ID_32771, &CMFC04134View::OnPopout)
END_MESSAGE_MAP()

// CMFC04134View 构造/析构

CMFC04134View::CMFC04134View()
{
	// TODO: 在此处添加构造代码

}

CMFC04134View::~CMFC04134View()
{
}

BOOL CMFC04134View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04134View 绘制

void CMFC04134View::OnDraw(CDC* /*pDC*/)
{
	CMFC04134Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC04134View 诊断

#ifdef _DEBUG
void CMFC04134View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04134View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04134Doc* CMFC04134View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04134Doc)));
	return (CMFC04134Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04134View 消息处理程序


void CMFC04134View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int t = dlg.DoModal();
}
