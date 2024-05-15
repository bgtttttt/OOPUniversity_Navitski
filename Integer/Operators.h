#pragma once
#include "Integer.h"

Integer operator+(Integer integer1, Integer integer2) {
	return Integer(integer1.getNumber() + integer2.getNumber());
};
Integer operator*(Integer integer1, Integer integer2) {
	return Integer(integer1.getNumber() * integer2.getNumber());
};
Integer operator/(Integer integer1, Integer integer2) {
	return Integer(integer1.getNumber() / integer2.getNumber());
};
Integer operator-(Integer integer1, Integer integer2) {
	return Integer(integer1.getNumber() - integer2.getNumber());
};
Integer operator%(Integer integer1, Integer integer2) {
	return Integer(integer1.getNumber() % integer2.getNumber());
};
Integer operator^(Integer integer1, Integer integer2) {
	int pow = 1;
	for (int i = 0; i < integer2.getNumber(); i++) {
		pow *= integer1.getNumber();
	}
	Integer res(pow);
	return res;
};
Integer operator-(Integer integer1) {
	return Integer(-integer1.getNumber());
};