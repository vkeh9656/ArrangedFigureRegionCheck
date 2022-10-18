
// ArrangedFigureRegionCheckDlg.h: 헤더 파일
//

#pragma once


// CArrangedFigureRegionCheckDlg 대화 상자
class CArrangedFigureRegionCheckDlg : public CDialogEx
{
private:
	CBrush m_select_brush, m_unselect_brush;
	CPen m_select_pen, m_unselect_pen;

	int m_index = -1; // 0~5

// 생성입니다.
public:
	CArrangedFigureRegionCheckDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ARRANGEDFIGUREREGIONCHECK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
