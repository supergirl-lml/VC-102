
// MFCTest14View.h : CMFCTest14View 类的接口
//

#pragma once


class CMFCTest14View : public CView
{
protected: // 仅从序列化创建
	CMFCTest14View();
	DECLARE_DYNCREATE(CMFCTest14View)

// 特性
public:
	CMFCTest14Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest14View();
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
	afx_msg void On32772();
};

#ifndef _DEBUG  // MFCTest14View.cpp 中的调试版本
inline CMFCTest14Doc* CMFCTest14View::GetDocument() const
   { return reinterpret_cast<CMFCTest14Doc*>(m_pDocument); }
#endif

