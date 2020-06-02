
// MFC-0504-3View.h : CMFC05043View 类的接口
//

#pragma once


class CMFC05043View : public CView
{
protected: // 仅从序列化创建
	CMFC05043View();
	DECLARE_DYNCREATE(CMFC05043View)

// 特性
public:
	CMFC05043Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC05043View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC-0504-3View.cpp 中的调试版本
inline CMFC05043Doc* CMFC05043View::GetDocument() const
   { return reinterpret_cast<CMFC05043Doc*>(m_pDocument); }
#endif

