#pragma once
#include"OrderManager.h"

class Order;
class FutureOrderManager :
	public OrderManager
{
public:
	FutureOrderManager(Order* _order);
	void RegisterOpenOrder(BrokerInfo* broker_info, InvestAccountSync* invest_account, OrderCredential* oc);//�ڻ�������ǹ�������δ�ɽ��ͳ�������Ʊ�����ʹ
	void RegisterCloseOrder();
	static bool IsOrderExpire(const std::string &insert_time);
};