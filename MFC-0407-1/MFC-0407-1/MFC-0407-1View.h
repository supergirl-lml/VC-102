
// MFC-0407-1View.h : CMFC04071View 类的接口
//

#pragma once


class CMFC04071View : public CView
{
protected: // 仅从序列化创建
	CMFC04071View();
	DECLARE_DYNCREATE(CMFC04071View)

// 特性
public:
	CMFC04071Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC04071View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFC-0407-1View.cpp 中的调试版本
inline CMFC04071Doc* CMFC04071View::GetDocument() const
   { return reinterpret_cast<CMFC04071Doc*>(m_pDocument); }
#endif

