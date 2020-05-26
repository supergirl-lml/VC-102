
// MFCTest15View.h : CMFCTest15View 类的接口
//

#pragma once


class CMFCTest15View : public CView
{
protected: // 仅从序列化创建
	CMFCTest15View();
	DECLARE_DYNCREATE(CMFCTest15View)

// 特性
public:
	CMFCTest15Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest15View();
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
};

#ifndef _DEBUG  // MFCTest15View.cpp 中的调试版本
inline CMFCTest15Doc* CMFCTest15View::GetDocument() const
   { return reinterpret_cast<CMFCTest15Doc*>(m_pDocument); }
#endif

