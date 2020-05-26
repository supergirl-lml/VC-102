
// MFCTest3View.h : CMFCTest3View 类的接口
//

#pragma once


class CMFCTest3View : public CView
{
protected: // 仅从序列化创建
	CMFCTest3View();
	DECLARE_DYNCREATE(CMFCTest3View)

// 特性
public:
	CMFCTest3Doc* GetDocument() const;

// 操作
public:
	int count ;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest3View.cpp 中的调试版本
inline CMFCTest3Doc* CMFCTest3View::GetDocument() const
   { return reinterpret_cast<CMFCTest3Doc*>(m_pDocument); }
#endif

