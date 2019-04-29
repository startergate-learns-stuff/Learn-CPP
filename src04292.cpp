#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData() { }
	virtual ~CMyData() { }
	void SetData(int nParam) { m_nData = nParam; }
	int GetData() { return m_nData; }

private:
	int m_nData = 0;
};

class CMyDataEx : public CMyData
{
public:
	void SetData(int nParam)
	{
		if (nParam > 10)
			nParam = 10;

		CMyData::SetData(nParam);
	}

	void PrintData()
	{
		cout << "PrintData(): " << GetData() << endl;
	}
};

int main()
{
	// �Ļ� ���� ��ü�� �⺻ �������� �������մϴ�.
	CMyData *pData = new CMyDataEx;
	CMyDataEx *pNewData = NULL;

	// CMyData::SetData() �Լ��� ȣ���մϴ�.
	// ���� 10�� �Ѵ��� �˻����� �ʽ��ϴ�.
	pData->SetData(15);

	// �⺻ ���Ŀ� ���� �������̳� ����Ű�� ����� �Ļ� �����Դϴ�.
	// �� ����� ��Ȯ�ϹǷ� �Ļ� ���Ŀ� ���� �����ͷ� ����ȯ�� �õ��մϴ�.
	pNewData = static_cast<CMyDataEx*> (pData);
	pNewData->PrintData();
	delete pData;

	return 0;
}