
// MFCTest19View.h : CMFCTest19View 类的接口
//

#pragma once


class CMFCTest19View : public CView
{
protected: // 仅从序列化创建
	CMFCTest19View();
	DECLARE_DYNCREATE(CMFCTest19View)

// 特性
public:
	CMFCTest19Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest19View();
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

#ifndef _DEBUG  // MFCTest19View.cpp 中的调试版本
inline CMFCTest19Doc* CMFCTest19View::GetDocument() const
   { return reinterpret_cast<CMFCTest19Doc*>(m_pDocument); }
#endif

