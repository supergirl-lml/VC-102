
// MFCTest13View.h : CMFCTest13View 类的接口
//

#pragma once


class CMFCTest13View : public CView
{
protected: // 仅从序列化创建
	CMFCTest13View();
	DECLARE_DYNCREATE(CMFCTest13View)

// 特性
public:
	CMFCTest13Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32772();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFCTest13View.cpp 中的调试版本
inline CMFCTest13Doc* CMFCTest13View::GetDocument() const
   { return reinterpret_cast<CMFCTest13Doc*>(m_pDocument); }
#endif

