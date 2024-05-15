#include "Integer.h"

Integer& Integer::operator+(Integer value) {
	Integer res(num + value.num);
	return res;
}
Integer& Integer::operator-(Integer value) {
	Integer res(num - value.num);
	return res;
}
Integer& Integer::operator*(Integer value) {
	Integer res(num * value.num);
	return res;
}
Integer& Integer::operator/(Integer value) {
	Integer res(num / value.num);
	return res;
}
Integer& Integer::operator%(Integer value) {
	Integer res(num % value.num);

	return res;
}
Integer& Integer::operator^(Integer value) {
	int pow = 1;
	for (int i = 0; i < value.num; i++) {
		pow *= num;
	}
	Integer res(pow);
	return res;
};
Integer& Integer::operator-() {
	Integer res(-num);
	return res;
};
Integer& Integer::operator++() {
	++num;
	return *this;
};
Integer& Integer::operator++(int) {
	Integer res = *this;
	++num;
	return res;
};
Integer& Integer::operator--() {
	--num;
	return *this;
};
Integer& Integer::operator--(int) {
	Integer res = *this;
	--num;
	return res;
};



int Integer::getNumber() {
	return num;
}