/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <exception>
#include <memory>

#include <mcrouter/lib/network/RpcStatsContext.h>
#include <mcrouter/lib/network/ThriftTransport.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/TTransportException.h>
#include <thrift/lib/cpp2/async/RequestChannel.h>

#include "mcrouter/lib/network/gen/gen-cpp2/MemcacheAsyncClient.h"

namespace facebook {
namespace memcache {

template <>
class ThriftTransport<MemcacheRouterInfo> : public ThriftTransportBase {
 public:
  ThriftTransport(folly::VirtualEventBase& eventBase, ConnectionOptions options)
      : ThriftTransportBase(eventBase, std::move(options)) {}
  ~ThriftTransport() override final = default;

  void setFlushList(FlushList* flushList) override final {
    flushList_ = flushList;
    if (thriftClient_) {
      auto* channel = static_cast<apache::thrift::RocketClientChannel*>(
          thriftClient_->getChannel());
      channel->setFlushList(flushList_);
    }
  }

  McAddReply sendSync(
      const McAddRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McAddReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcAdd(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McAppendReply sendSync(
      const McAppendRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McAppendReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcAppend(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McCasReply sendSync(
      const McCasRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McCasReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcCas(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McDecrReply sendSync(
      const McDecrRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McDecrReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcDecr(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McDeleteReply sendSync(
      const McDeleteRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McDeleteReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcDelete(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McFlushAllReply sendSync(
      const McFlushAllRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McFlushAllReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcFlushAll(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McFlushReReply sendSync(
      const McFlushReRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McFlushReReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcFlushRe(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McGatReply sendSync(
      const McGatRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McGatReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcGat(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McGatsReply sendSync(
      const McGatsRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McGatsReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcGats(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McGetReply sendSync(
      const McGetRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McGetReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcGet(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McGetsReply sendSync(
      const McGetsRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McGetsReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcGets(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McIncrReply sendSync(
      const McIncrRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McIncrReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcIncr(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McLeaseGetReply sendSync(
      const McLeaseGetRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McLeaseGetReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcLeaseGet(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McLeaseSetReply sendSync(
      const McLeaseSetRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McLeaseSetReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcLeaseSet(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McMetagetReply sendSync(
      const McMetagetRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McMetagetReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcMetaget(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McPrependReply sendSync(
      const McPrependRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McPrependReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcPrepend(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McReplaceReply sendSync(
      const McReplaceRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McReplaceReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcReplace(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McSetReply sendSync(
      const McSetRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McSetReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcSet(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McTouchReply sendSync(
      const McTouchRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McTouchReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcTouch(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

  McVersionReply sendSync(
      const McVersionRequest& request,
      std::chrono::milliseconds timeout,
      RpcStatsContext* /* rpcContext */ = nullptr) {
    return sendSyncImpl([this, &request, timeout]() {
      McVersionReply reply;
      if (auto* thriftClient = getThriftClient()) {
        auto rpcOptions = getRpcOptions(timeout);
        thriftClient->sync_mcVersion(rpcOptions, reply, request);
      } else {
        setReplyResultAndMessage(
          reply,
          carbon::Result::CONNECT_ERROR,
          "Error creating thrift client.");
      }
      return reply;
    });
  }

 private:
  std::unique_ptr<thrift::MemcacheAsyncClient> thriftClient_;
  FlushList* flushList_{nullptr};

  thrift::MemcacheAsyncClient* getThriftClient() {
    if (!thriftClient_) {
      thriftClient_ = createThriftClient<thrift::MemcacheAsyncClient>();
      if (flushList_) {
        auto* channel = static_cast<apache::thrift::RocketClientChannel*>(
            thriftClient_->getChannel());
        channel->setFlushList(flushList_);
      }
    }
    return thriftClient_.get();
  }

  void resetClient() override final {
    if (thriftClient_) {
      if (auto channel = thriftClient_->getChannel()) {
        // Reset the callback to avoid the following cycle:
        //  ~ThriftAsyncClient() -> ~RocketClientChannel() ->
        //  channelClosed() -> ~ThriftAsyncClient()
        channel->setCloseCallback(nullptr);
      }
      thriftClient_.reset();
    }
  }
};

} // namespace memcache
} // namespace facebook