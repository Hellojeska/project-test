#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int s1_no, s2_no, s3_no;            //�й�
	int s1_kor, s2_kor, s3_kor;			//���� ����
	int s1_math, s2_math, s3_math;		//���� ����
	int s1_eng, s2_eng, s3_eng;			//���� ����
	float s1_avg, s2_avg, s3_avg;		//���
	float totalavg = 0.0f;				//��ü ���
	int nunberofstudent = 0;			//�л���

	while (1)
	{
		cout << "\n----------�޴�----------\n";
		cout << "1. �л� ���� �߰�\n";
		cout << "2. ��ü ���� ����\n";
		cout << "Q. ���α׷� ����\n";
		cout << "--------------------------\n\n";
		cout << "���ϴ� �۾��� ��ȣ�� �Է��ϼ���. : ";

		char select;
		cin >> select;

		switch (select)
		{
		case '1':
		{
			cout << "\n�л��� ���� �߰��� ���õǾ����ϴ�.\n";

			if (3 == nunberofstudent)
			{
				cout << "\n���̻� �Է��Ҽ� �����ϴ�.\n";
				break;
			}

			int kor, eng, math;

			cout <<"\n" << nunberofstudent+1 << "��° �л��� ���� ���� ���� ������ �Է��ϼ���\n";
			cin >> kor >> eng >> math;

			float avg = float(kor + eng + math) / 3.0f;

			if (0 == nunberofstudent)
			{
				s1_no = nunberofstudent + 1;
				s1_kor = kor;
				s1_eng = eng;
				s1_math = math;
				s1_avg = avg;

				totalavg = s1_avg;
			}

			else if (1 == nunberofstudent)
			{
				s2_no = nunberofstudent + 1;
				s2_kor = kor;
				s2_eng = eng;
				s2_math = math;
				s2_avg = avg;

				totalavg = (s1_avg+s2_avg)/2;
			}

			else 
			{
				s3_no = nunberofstudent + 1;
				s3_kor = kor;
				s3_eng = eng;
				s3_math = math;
				s3_avg = avg;

				totalavg = (s1_avg + s2_avg + s3_avg) / 3;
			}

			nunberofstudent++;

			cout << "\n�л��� ������ �ùٸ��� �ԷµǾ����ϴ�.\n";
			break;
		}
		case '2':
		{
			cout.precision(2);
			cout << fixed;

			cout << "\n��ü �������Ⱑ ���õǾ����ϴ�.\n";
			cout << "  �й� ���� ���� ���� ���\n";

			for (int i = 0; i < nunberofstudent; ++i)
			{
				if (i == 0)
				{
					cout << setw(7) << s1_no <<setw(7)<< s1_kor << setw(7) <<  s1_eng << setw(7) << s1_math << setw(7) << s1_avg << setw(7) <<"\n";

				}
				if (i == 1)
				{
					cout << setw(7) << s2_no << setw(7) << s2_kor << setw(7) << s2_eng << setw(7) << s2_math << setw(7) << s2_avg << setw(7) << "\n";
				}
				if (i == 2)
				{
					cout << setw(7) << s3_no << setw(7) << s3_kor << setw(7) << s3_eng << setw(7) << s3_math << setw(7) << s3_avg << setw(7) << "\n";
				}
			}

			cout << "\n��ü ���=" << totalavg << "\n";
			break;
		}
		case 'Q':
		case 'q':
			cout << "\n���α׷��� ����Ǿ����ϴ�.\n";
			return 0;

		default:
			cout << "\n�ùٸ� ���� �Է��Ͻʽÿ�.\n";
			break;


		}


	}
	return 0;
}