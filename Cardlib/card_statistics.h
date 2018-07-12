#ifndef _CARD_STATISTICS_H_
#define _CARD_STATISTICS_H_

#include <vector>
#include <string>

using namespace std;

class CardStatistics
{
public:
	vector<Card> card1;//���еĵ��ƣ�����3
	vector<Card> card2;//���еĶ��ӣ�����33
	vector<Card> card3;//���е���ͬ�ţ�����333
	vector<Card> card4;//���е�ը��������3333

	//�������е���A,2,4,7,10,5,J,Q,Q,6,6,8,A,3,8,Q
	vector<Card> line1;//���Դ�ĵ���3,4,5,6,7,8,10,J,Q,A
	vector<Card> line2;//���Դ�Ķ���66,88,QQ,AA
	vector<Card> line3;//���Դ����ͬ��QQQ

	unsigned int len;//�����Ƶ�����

	CardStatistics();

	void clear();
	int statistics(std::vector<Card> &cards);

	void debug();

	//2016-08-11
	//yaosheng
	CardStatistics& swap(CardStatistics& rhs) 
	{
		if (this != &rhs) {
			card1.swap(rhs.card1);
			card2.swap(rhs.card2);
			card3.swap(rhs.card3);
			card4.swap(rhs.card4);

			line1.swap(rhs.line1);
			line2.swap(rhs.line2);
			line3.swap(rhs.line3);

			std::swap(len, rhs.len);
		}
		return *this;
	}
};


#endif /* _CARD_STATISTICS_H_ */
