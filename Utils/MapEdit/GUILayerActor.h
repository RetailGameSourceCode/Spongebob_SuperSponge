#if !defined(AFX_GUILAYERACTOR_H__D2268E7C_1D7E_4C2F_AF3C_49BB374ED65B__INCLUDED_)
#define AFX_GUILAYERACTOR_H__D2268E7C_1D7E_4C2F_AF3C_49BB374ED65B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GUILayerActor.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGUILayerActor dialog

class CGUILayerActor : public CDialog
{
// Construction
public:
	CGUILayerActor(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CGUILayerActor)
	enum { IDD = IDD_LAYER_ACTOR };
	CButton	m_Collision;
	CButton	m_Player;
	CEdit	m_TurnRate;
	CEdit	m_Speed;
	CEdit	m_Attack;
	CEdit	m_Health;
	CComboBox	m_LevelList;
	CListBox	m_PosList;
	CComboBox	m_List;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGUILayerActor)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation

public:
	void	DisableCallback(bool f)	{CallbackFlag=f;}
	void	SetVal(CEdit &Dlg,int Number);
	int		GetVal(CEdit &Dlg);
protected:
	bool	CallbackFlag;

	// Generated message map functions
	//{{AFX_MSG(CGUILayerActor)
	afx_msg void OnActorDelete();
	afx_msg void OnActorPosUp();
	afx_msg void OnActorPosDown();
	afx_msg void OnActorPosDelete();
	afx_msg void OnChangeParam();
	afx_msg void OnSelchangeActorList();
	afx_msg void OnSelchangeLevelActorList();
	afx_msg void OnSelchangeActorPosList();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GUILAYERACTOR_H__D2268E7C_1D7E_4C2F_AF3C_49BB374ED65B__INCLUDED_)
