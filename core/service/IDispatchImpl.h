#ifndef CORE_SERVICE_IDISPATCHIMPL_H
#define CORE_SERVICE_IDISPATCHIMPL_H

//impl ��ʾ����ʵ����
namespace cptf{
namespace core{
	template <typename T>
	class IDispatchImpl : public T{
	public:
		IDispatchImpl(){}
		~IDispatchImpl(){}
	};
}
}
#endif