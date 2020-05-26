
// MFCTest17View.h : CMFCTest17View 类的接口
//

#pragma once


class CMFCTest17View : public CView
{
protected: // 仅从序列化创建
	CMFCTest17View();
	DECLARE_DYNCREATE(CMFCTest17View)

// 特性
public:
	CMFCTest17Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	int a, b, c;
	POINT m_star, npoint;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest17View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void OnEllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest17View.cpp 中的调试版本
inline CMFCTest17Doc* CMFCTest17View::GetDocument() const
   { return reinterpret_cast<CMFCTest17Doc*>(m_pDocument); }
#endif

