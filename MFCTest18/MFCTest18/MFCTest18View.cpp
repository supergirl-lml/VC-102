
// MFCTest18View.cpp : CMFCTest18View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCTest18.h"
#endif

#include "MFCTest18Doc.h"
#include "MFCTest18View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest18View

IMPLEMENT_DYNCREATE(CMFCTest18View, CView)

BEGIN_MESSAGE_MAP(CMFCTest18View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCTest18View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCTest18View 构造/析构

CMFCTest18View::CMFCTest18View()
{
	// TODO: 在此处添加构造代码

}

CMFCTest18View::~CMFCTest18View()
{
}

BOOL CMFCTest18View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCTest18View 绘制

void CMFCTest18View::OnDraw(CDC* pDC)
{
	CMFCTest18Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCTest18View 诊断

#ifdef _DEBUG
void CMFCTest18View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest18View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest18Doc* CMFCTest18View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest18Doc)));
	return (CMFCTest18Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest18View 消息处理程序


void CMFCTest18View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);  //建立对象
	int r = cfd.DoModal(); // 弹出对话框
	CClientDC dc(this);
	
	if (r == IDOK)//如果退出对话框时选项为OK的话
    {   
		CString filename = cfd.GetPathName();
		dc.TextOutW(200, 200, filename);
	}

}
