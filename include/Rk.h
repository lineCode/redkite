/**
 * File name: Rk.h
 * Project: Redkite (A small GUI toolkit)
 *
 * Copyright (C) 2019 Iurie Nistor (http://quamplex.com/redkite)
 *
 * This file is part of Redkite.
 *
 * Redkite is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef RK_GLOBAL_H
#define RK_GLOBAL_H

#include <memory>
#include <string>
#include <list>
#include <memory>
#include <thread>
#include <chrono>

#define RK_UNUSED(expr) (void)expr

#define RK_DECLARE_IMPL(Class) \
  class Class##Impl; \
  Class##Impl *o_ptr; \
  Class(<Class##Impl>& impl);

#define RK_DELCATE_IMPL_PTR(Class) Class##Impl *impl_ptr;
#define RK_DECALRE_INTERFACE_PTR(Class) Class *inf_ptr;

#define RK_DECLARE_IMPL

#define RK_CLASS_INFO(name, value) virtual std::string rk_property_ ##name () const { return std::string( #value ); }
#define RK_SET_CLASS_INFO(name, value) virtual std::string rk_property_ ##name () const override { return std::string( #value ); }

#endif // RK_GLOBAL_H
