
// MFCTest16View.h : CMFCTest16View 类的接口
//

#pragma once


class CMFCTest16View : public CView
{
protected: // 仅从序列化创建
	CMFCTest16View();
	DECLARE_DYNCREATE(CMFCTest16View)

// 特性
public:
	CMFCTest16Doc* GetDocument() const;

// 操作
public:
	CBitmap  m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest16View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCTest16View.cpp 中的调试版本
inline CMFCTest16Doc* CMFCTest16View::GetDocument() const
   { return reinterpret_cast<CMFCTest16Doc*>(m_pDocument); }
#endif

