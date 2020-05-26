
// MFC-0407-2View.cpp : CMFC04072View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0407-2.h"
#endif

#include "MFC-0407-2Doc.h"
#include "MFC-0407-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"MyDlg.h"

// CMFC04072View

IMPLEMENT_DYNCREATE(CMFC04072View, CView)

BEGIN_MESSAGE_MAP(CMFC04072View, CView)
	ON_COMMAND(ID_32771, &CMFC04072View::OnPopout)
END_MESSAGE_MAP()

// CMFC04072View 构造/析构

CMFC04072View::CMFC04072View()
{
	// TODO: 在此处添加构造代码

}

CMFC04072View::~CMFC04072View()
{
}

BOOL CMFC04072View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04072View 绘制

void CMFC04072View::OnDraw(CDC* /*pDC*/)
{
	CMFC04072Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC04072View 诊断

#ifdef _DEBUG
void CMFC04072View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04072View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04072Doc* CMFC04072View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04072Doc)));
	return (CMFC04072Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04072View 消息处理程序


void CMFC04072View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int t = dlg.DoModal();

}
