/*
Copyright © 2015 Kean Mariotti <kean.mariotti@gmail.com>
This work is free. You can redistribute it and/or modify it under the
terms of the Do What The Fuck You Want To Public License, Version 2,
as published by Sam Hocevar. See http://www.wtfpl.net/ for more details.
*/

#include <UnitTest++/UnitTest++.h>
#include <sstl/queue.h>
#include <sstl/deque.h>

namespace sstl
{
namespace test
{

SUITE(test_queue)
{
    TEST(constructors_can_be_instantiated)
    {
        static const auto CAPACITY = 5;
        auto container = sstl::deque<int, CAPACITY> {};

        sstl::queue<int, CAPACITY> {};

        sstl::queue<int, CAPACITY> {container};

        auto other_queue = sstl::queue<int, CAPACITY> {};
        sstl::queue<int, CAPACITY> {other_queue};
    }

    TEST(member_functions_can_be_instantiated)
    {
        auto queue = sstl::queue<int, 5> {};
        auto queue2 = queue;

        queue.push(3);
        queue.emplace(5);
        queue.front();
        queue.back();
        queue.pop();
        queue.empty();
        queue.size();
        queue.swap(queue2);
    }
};
}
}
