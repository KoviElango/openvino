// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "core/node.hpp"
#include "openvino/op/multiply.hpp"

namespace ov {
namespace frontend {
namespace onnx {
namespace op {
namespace set_1 {
inline ov::OutputVector mul(const ov::frontend::onnx::Node& node) {
    return common::handle_opset6_binary_op<ov::op::v1::Multiply>(node);
}

}  // namespace set_1

namespace set_7 {
inline ov::OutputVector mul(const ov::frontend::onnx::Node& node) {
    return {std::make_shared<ov::op::v1::Multiply>(node.get_ng_inputs().at(0), node.get_ng_inputs().at(1))};
}

}  // namespace set_7
}  // namespace op
}  // namespace onnx
}  // namespace frontend
}  // namespace ov
