
// MFCTest18View.h : CMFCTest18View 类的接口
//

#pragma once


class CMFCTest18View : public CView
{
protected: // 仅从序列化创建
	CMFCTest18View();
	DECLARE_DYNCREATE(CMFCTest18View)

// 特性
public:
	CMFCTest18Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest18View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCTest18View.cpp 中的调试版本
inline CMFCTest18Doc* CMFCTest18View::GetDocument() const
   { return reinterpret_cast<CMFCTest18Doc*>(m_pDocument); }
#endif

