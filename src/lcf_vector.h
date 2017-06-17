/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_VECTOR_H
#define LCF_VECTOR_H

#include <vector>

template <typename T, class A = std::allocator<T> >
class LcfVector : private std::vector<T, A> {
	typedef std::vector<T, A> base_type;

public:
	using base_type::base_type;
	using base_type::size;
	using base_type::begin;
	using base_type::end;
	using base_type::push_back;
	using base_type::rbegin;
	using base_type::rend;
	using base_type::cbegin;
	using base_type::cend;
	using base_type::capacity;
	using base_type::resize;
	using base_type::clear;
	using base_type::emplace;
	using base_type::emplace_back;
	using base_type::empty;
	using base_type::assign;
	using base_type::at;
	using base_type::crbegin;
	using base_type::crend;
	using base_type::front;
	using base_type::insert;
	using base_type::pop_back;
	using base_type::reserve;
	using base_type::back;
	using base_type::iterator;
	using base_type::const_iterator;
	using base_type::operator[];
	using base_type::operator=;
	using base_type::reverse_iterator;
	using base_type::const_reverse_iterator;
	using base_type::erase;
	using base_type::reference;
	using base_type::const_reference;
	using base_type::swap;

	friend inline bool operator==(const LcfVector<T,A>& lhs, const LcfVector<T,A>& rhs) {
		return static_cast<std::vector<T, A>>(lhs) == static_cast<std::vector<T, A>>(rhs);
	}

	friend inline bool operator!=(const LcfVector<T, A>& lhs, const LcfVector<T, A>& rhs) {
		return static_cast<std::vector<T, A>>(lhs) != static_cast<std::vector<T, A>>(rhs);
	}
	friend inline bool operator<=(const LcfVector<T, A>& lhs, const LcfVector<T, A>& rhs) {
		return static_cast<std::vector<T, A>>(lhs) <= static_cast<std::vector<T, A>>(rhs);
	}

	friend inline bool operator<(const LcfVector<T, A>& lhs, const LcfVector<T, A>& rhs) {
		return static_cast<std::vector<T, A>>(lhs) < static_cast<std::vector<T, A>>(rhs);
	}
	
	friend inline bool operator>=(const LcfVector<T, A>& lhs, const LcfVector<T, A>& rhs) {
		return static_cast<std::vector<T, A>>(lhs) >= static_cast<std::vector<T, A>>(rhs);
	}
	
	friend inline bool operator>(const LcfVector<T, A>& lhs, const LcfVector<T, A>& rhs) {
		return static_cast<std::vector<T, A>>(lhs) > static_cast<std::vector<T, A>>(rhs);
	}
};

#endif
