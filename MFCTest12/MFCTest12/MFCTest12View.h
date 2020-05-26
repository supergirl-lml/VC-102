
// MFCTest12View.h : CMFCTest12View 类的接口
//

#pragma once


class CMFCTest12View : public CView
{
protected: // 仅从序列化创建
	CMFCTest12View();
	DECLARE_DYNCREATE(CMFCTest12View)

// 特性
public:
	CMFCTest12Doc* GetDocument() const;

// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest12View.cpp 中的调试版本
inline CMFCTest12Doc* CMFCTest12View::GetDocument() const
   { return reinterpret_cast<CMFCTest12Doc*>(m_pDocument); }
#endif

