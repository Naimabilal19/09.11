#include <Windows.h>
#include <tchar.h>
#include "resource.h"

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

int num = 0, maxAns=15;
HWND  b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13,b14,b15,edit1,edit2,edit3;
TCHAR perc[] = TEXT("%"), editc1[20],editc2[20],editc3[20];
int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	return DialogBox(hInstance, MAKEINTRESOURCE(IDD_ABOUTBOX), NULL, (DLGPROC)DlgProc);
}

BOOL CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CLOSE:
		EndDialog(hWnd, NULL);
		return(TRUE);
	case WM_INITDIALOG:
		{
		b1 = GetDlgItem(hWnd, IDC_RADIO2);
		b2 = GetDlgItem(hWnd, IDC_RADIO5);
		b3 = GetDlgItem(hWnd, IDC_RADIO10);
		b4 = GetDlgItem(hWnd, IDC_RADIO12);
		b5 = GetDlgItem(hWnd, IDC_RADIO15);
		b6 = GetDlgItem(hWnd, IDC_RADIO17);
		b7 = GetDlgItem(hWnd, IDC_RADIO19);
		b8 = GetDlgItem(hWnd, IDC_RADIO14);
		b9 = GetDlgItem(hWnd, IDC_RADIO19);
		b10 = GetDlgItem(hWnd, IDC_CHECK1);
		b11 = GetDlgItem(hWnd, IDC_CHECK2);
		b12 = GetDlgItem(hWnd, IDC_CHECK8);
		b13 = GetDlgItem(hWnd, IDC_CHECK9);
		b14 = GetDlgItem(hWnd, IDC_CHECK10);
		b15 = GetDlgItem(hWnd, IDC_CHECK13);
		edit1 = GetDlgItem(hWnd, IDC_EDIT1);
		edit2 = GetDlgItem(hWnd, IDC_EDIT2);
		edit3 = GetDlgItem(hWnd, IDC_EDIT3);
		return TRUE;
		}
		break;
	case WM_COMMAND:
	{
		if(LOWORD(wParam)==IDD_ABOUTBOX)
			{
			LRESULT Res1 = SendMessage(b1, BM_GETCHECK, 0, 0);
			LRESULT Res2 = SendMessage(b2, BM_GETCHECK, 0, 0);
			LRESULT Res3 = SendMessage(b3, BM_GETCHECK, 0, 0);
			LRESULT Res4 = SendMessage(b4, BM_GETCHECK, 0, 0);
			LRESULT Res5 = SendMessage(b5, BM_GETCHECK, 0, 0);
			LRESULT Res6 = SendMessage(b6, BM_GETCHECK, 0, 0);
			LRESULT Res7 = SendMessage(b7, BM_GETCHECK, 0, 0);
			LRESULT Res8 = SendMessage(b8, BM_GETCHECK, 0, 0);
			LRESULT Res9 = SendMessage(b9, BM_GETCHECK, 0, 0);
			LRESULT Res10 = SendMessage(b10, BM_GETCHECK, 0, 0);
			LRESULT Res11 = SendMessage(b11, BM_GETCHECK, 0, 0);
			LRESULT Res12 = SendMessage(b12, BM_GETCHECK, 0, 0);
			LRESULT Res13 = SendMessage(b13, BM_GETCHECK, 0, 0);
			LRESULT Res14 = SendMessage(b14, BM_GETCHECK, 0, 0);
			LRESULT Res15 = SendMessage(b15, BM_GETCHECK, 0, 0);
			GetWindowText(edit1, editc1, 50);
			GetWindowText(edit2, editc2, 50);
			GetWindowText(edit3, editc3, 50);
			if (Res1 == BST_CHECKED)
			{
				num++;
			}
			if (Res2 == BST_CHECKED)
			{
				num ++;
			}
			if (Res3 == BST_CHECKED)
			{
				num++;
			}
			if (Res4 == BST_CHECKED)
			{
				num++;
			}
			if (Res5 == BST_CHECKED)
			{
				num++;
			}
			if (Res6 == BST_CHECKED)
			{
				num++;
			}
			if (Res7 == BST_CHECKED)
			{
				num++;
			}
			if (Res8 == BST_CHECKED)
			{
				
				num++;
			}
			if (Res9 == BST_CHECKED)
			{
				num++;
			}
			else if (Res10 == BST_CHECKED)
			{
				num++;
			}
			else if (Res11 == BST_CHECKED)
			{
				num++;
			}
			else if (Res12 == BST_CHECKED)
			{
				num++;
			}
			else if (Res13 == BST_CHECKED)
			{
				num++;
			}
			else if (Res14 == BST_CHECKED)
			{
				num++;
			}
			else if (Res15 == BST_CHECKED)
			{
				num++;
			}
			else
			{
				num--;
			}
			}
	}
	if (lstrcmp(editc1, TEXT(" ËÂ‚")))
	{
		num ++;
	}
	if (lstrcmp(editc2, TEXT("ÿ¿√")))
	{
		num++;
	}
	if (lstrcmp(editc3, TEXT("30")))
	{
		num++;
	}
		if (LOWORD(wParam) == IDC_BUTTON1)
		{
			num = (double(num) / maxAns) * 100;
			TCHAR buff[50];
			wsprintf(buff, TEXT("Result:%d"), num);
			MessageBox(hWnd, buff, TEXT("Game over"), MB_OKCANCEL);
		}
		return(TRUE);
	}

	return(FALSE);
}
