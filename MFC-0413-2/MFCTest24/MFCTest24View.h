
// MFCTest24View.h : CMFCTest24View 类的接口
//

#pragma once


class CMFCTest24View : public CView
{
protected: // 仅从序列化创建
	CMFCTest24View();
	DECLARE_DYNCREATE(CMFCTest24View)

// 特性
public:
	CMFCTest24Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMultiple();
};

#ifndef _DEBUG  // MFCTest24View.cpp 中的调试版本
inline CMFCTest24Doc* CMFCTest24View::GetDocument() const
   { return reinterpret_cast<CMFCTest24Doc*>(m_pDocument); }
#endif

