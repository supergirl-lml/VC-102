
// MFCTest9View.h : CMFCTest9View 类的接口
//

#pragma once


class CMFCTest9View : public CView
{
protected: // 仅从序列化创建
	CMFCTest9View();
	DECLARE_DYNCREATE(CMFCTest9View)

// 特性
public:
	CMFCTest9Doc* GetDocument() const;

// 操作
public:
	int x1, y1;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest9View();
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
//	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest9View.cpp 中的调试版本
inline CMFCTest9Doc* CMFCTest9View::GetDocument() const
   { return reinterpret_cast<CMFCTest9Doc*>(m_pDocument); }
#endif

