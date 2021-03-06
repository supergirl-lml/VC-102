
// MFCTest10View.h : CMFCTest10View 类的接口
//

#pragma once


class CMFCTest10View : public CView
{
protected: // 仅从序列化创建
	CMFCTest10View();
	DECLARE_DYNCREATE(CMFCTest10View)

// 特性
public:
	CMFCTest10Doc* GetDocument() const;

// 操作
public:
	int count ,sign;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest10View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest10View.cpp 中的调试版本
inline CMFCTest10Doc* CMFCTest10View::GetDocument() const
   { return reinterpret_cast<CMFCTest10Doc*>(m_pDocument); }
#endif

