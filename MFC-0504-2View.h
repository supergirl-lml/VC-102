
// MFC-0504-2View.h : CMFC05042View 类的接口
//

#pragma once


class CMFC05042View : public CView
{
protected: // 仅从序列化创建
	CMFC05042View();
	DECLARE_DYNCREATE(CMFC05042View)

// 特性
public:
	CMFC05042Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC05042View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC-0504-2View.cpp 中的调试版本
inline CMFC05042Doc* CMFC05042View::GetDocument() const
   { return reinterpret_cast<CMFC05042Doc*>(m_pDocument); }
#endif

