#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int s1_no, s2_no, s3_no;            //학번
	int s1_kor, s2_kor, s3_kor;			//국어 성적
	int s1_math, s2_math, s3_math;		//수학 성적
	int s1_eng, s2_eng, s3_eng;			//영어 성적
	float s1_avg, s2_avg, s3_avg;		//평균
	float totalavg = 0.0f;				//전체 평균
	int nunberofstudent = 0;			//학생수

	while (1)
	{
		cout << "\n----------메뉴----------\n";
		cout << "1. 학생 성적 추가\n";
		cout << "2. 전체 성적 보기\n";
		cout << "Q. 프로그램 종료\n";
		cout << "--------------------------\n\n";
		cout << "원하는 작업의 번호를 입력하세요. : ";

		char select;
		cin >> select;

		switch (select)
		{
		case '1':
		{
			cout << "\n학생의 성적 추가가 선택되었습니다.\n";

			if (3 == nunberofstudent)
			{
				cout << "\n더이상 입력할수 없습니다.\n";
				break;
			}

			int kor, eng, math;

			cout <<"\n" << nunberofstudent+1 << "번째 학생의 국어 영어 수학 점수를 입력하세요\n";
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

			cout << "\n학생의 성적이 올바르게 입력되었습니다.\n";
			break;
		}
		case '2':
		{
			cout.precision(2);
			cout << fixed;

			cout << "\n전체 성적보기가 선택되었습니다.\n";
			cout << "  학번 국어 영어 수학 평균\n";

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

			cout << "\n전체 평균=" << totalavg << "\n";
			break;
		}
		case 'Q':
		case 'q':
			cout << "\n프로그램이 종료되었습니다.\n";
			return 0;

		default:
			cout << "\n올바른 값을 입력하십시오.\n";
			break;


		}


	}
	return 0;
}