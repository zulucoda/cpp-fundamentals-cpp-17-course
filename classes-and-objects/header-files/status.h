//
// Created by muzikayise on 2019/08/25.
//
#pragma once
// old way
enum Status
{
    Pending,
    Approved,
    Cancelled
};

// new way below

enum class FileError
{
    notFound,
    ok
};

enum class NetworkError
{
    disconnected,
    ok
};