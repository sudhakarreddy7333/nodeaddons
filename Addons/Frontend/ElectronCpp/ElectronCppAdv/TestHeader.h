#pragma once
#include<string>
#include<iostream>
#include "HelloWorldDll.h"
namespace TestDll {
	class TestDllClass
	{
	public:
		TestDllClass();
		~TestDllClass();
		double TestDllFunc(double a, double b) {
			
					double res = MathLibrary::Functions::Add(a,b);
					return res;
		};

	private:

	};

	TestDllClass::TestDllClass()
	{
	}

	TestDllClass::~TestDllClass()
	{
	}
}