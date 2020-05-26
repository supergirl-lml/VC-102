
// MFC-0421-1View.cpp : CMFC04211View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-0421-1.h"
#endif

#include "MFC-0421-1Doc.h"
#include "MFC-0421-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include<fstream>
#include<iostream>
using namespace std;

// CMFC04211View

IMPLEMENT_DYNCREATE(CMFC04211View, CView)

BEGIN_MESSAGE_MAP(CMFC04211View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFC04211View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CMFC04211View::OnFileSaveAs)
END_MESSAGE_MAP()

// CMFC04211View 构造/析构

CMFC04211View::CMFC04211View()
{
	// TODO: 在此处添加构造代码

}

CMFC04211View::~CMFC04211View()
{
}

BOOL CMFC04211View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC04211View 绘制

void CMFC04211View::OnDraw(CDC* /*pDC*/)
{
	CMFC04211Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC04211View 诊断

#ifdef _DEBUG
void CMFC04211View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC04211View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC04211Doc* CMFC04211View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC04211Doc)));
	return (CMFC04211Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC04211View 消息处理程序


void CMFC04211View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
		filename = cfd.GetPathName();
		ifstream ifs(filename);
		CClientDC dc(this);
		dc.TextOutW(200, 300, filename);
	}
}


void CMFC04211View::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK) {
		ofstream ofs(cfd.GetPathName());
		ofs << CT2A(filename.GetString()) << endl;
	}
}
