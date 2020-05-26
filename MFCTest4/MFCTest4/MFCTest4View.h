
// MFCTest4View.h : CMFCTest4View 类的接口
//

#pragma once


class CMFCTest4View : public CView
{
protected: // 仅从序列化创建
	CMFCTest4View();
	DECLARE_DYNCREATE(CMFCTest4View)

// 特性
public:
	CMFCTest4Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	CRect rect;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest4View();
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

#ifndef _DEBUG  // MFCTest4View.cpp 中的调试版本
inline CMFCTest4Doc* CMFCTest4View::GetDocument() const
   { return reinterpret_cast<CMFCTest4Doc*>(m_pDocument); }
#endif

