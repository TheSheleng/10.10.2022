#pragma once

#include <iostream>

using namespace std;

namespace xcptn
{
	class Exception
	{
		const char* str = nullptr;

	protected:
		Exception() = default;

	public:
		Exception(const char* str) : str(str) {}
		virtual const char* what();
	};

	class DivideByZero : public Exception
	{
	public: 
		const char* what() override;
	};

	class InvalidInput : public Exception
	{
	public:
		InvalidInput();
		const char* what() override;
	};

	class IndexOutOfRange : public Exception
	{
	public:
		const char* what() override;
	};

	class NullReference : public Exception
	{
	public:
		const char* what() override;
	};
}

