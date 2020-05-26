
// MFCTest5View.h : CMFCTest5View 类的接口
//

#pragma once


class CMFCTest5View : public CView
{
protected: // 仅从序列化创建
	CMFCTest5View();
	DECLARE_DYNCREATE(CMFCTest5View)

// 特性
public:
	CMFCTest5Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&>   ca;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest5View.cpp 中的调试版本
inline CMFCTest5Doc* CMFCTest5View::GetDocument() const
   { return reinterpret_cast<CMFCTest5Doc*>(m_pDocument); }
#endif

