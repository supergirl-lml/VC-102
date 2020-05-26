
// MFC-0504-1View.h : CMFC05041View 类的接口
//

#pragma once


class CMFC05041View : public CView
{
protected: // 仅从序列化创建
	CMFC05041View();
	DECLARE_DYNCREATE(CMFC05041View)

// 特性
public:
	CMFC05041Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC05041View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC-0504-1View.cpp 中的调试版本
inline CMFC05041Doc* CMFC05041View::GetDocument() const
   { return reinterpret_cast<CMFC05041Doc*>(m_pDocument); }
#endif

