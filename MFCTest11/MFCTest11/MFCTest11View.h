
// MFCTest11View.h : CMFCTest11View 类的接口
//

#pragma once


class CMFCTest11View : public CView
{
protected: // 仅从序列化创建
	CMFCTest11View();
	DECLARE_DYNCREATE(CMFCTest11View)

// 特性
public:
	CMFCTest11Doc* GetDocument() const;

// 操作
public:
	CRect m_tagRec;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest11View.cpp 中的调试版本
inline CMFCTest11Doc* CMFCTest11View::GetDocument() const
   { return reinterpret_cast<CMFCTest11Doc*>(m_pDocument); }
#endif

