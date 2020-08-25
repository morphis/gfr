/*
 * Copyright (C) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * THIS FILE WAS GENERATED BY apic. DO NOT EDIT.
 */

// clang-format off
virtual VkResult PreBeginCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkCommandBufferBeginInfo const* pBeginInfo) final override;
virtual VkResult PostBeginCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkCommandBufferBeginInfo const* pBeginInfo, VkResult result) final override;
virtual VkResult PreEndCommandBuffer(WrappedVkCommandBuffer* commandBuffer) final override;
virtual VkResult PostEndCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkResult result) final override;
virtual VkResult PreResetCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkCommandBufferResetFlags flags) final override;
virtual VkResult PostResetCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkCommandBufferResetFlags flags, VkResult result) final override;
virtual void PreCmdExecuteCommands(WrappedVkCommandBuffer* commandBuffer, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers) final override;
virtual void PostCmdExecuteCommands(WrappedVkCommandBuffer* commandBuffer, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers) final override;
virtual void PreCmdCopyBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, VkBufferCopy const* pRegions) final override;
virtual void PostCmdCopyBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, VkBufferCopy const* pRegions) final override;
virtual void PreCmdCopyImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageCopy const* pRegions) final override;
virtual void PostCmdCopyImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageCopy const* pRegions) final override;
virtual void PreCmdBlitImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageBlit const* pRegions, VkFilter filter) final override;
virtual void PostCmdBlitImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageBlit const* pRegions, VkFilter filter) final override;
virtual void PreCmdCopyBufferToImage(WrappedVkCommandBuffer* commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkBufferImageCopy const* pRegions) final override;
virtual void PostCmdCopyBufferToImage(WrappedVkCommandBuffer* commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkBufferImageCopy const* pRegions) final override;
virtual void PreCmdCopyImageToBuffer(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, VkBufferImageCopy const* pRegions) final override;
virtual void PostCmdCopyImageToBuffer(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, VkBufferImageCopy const* pRegions) final override;
virtual void PreCmdUpdateBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, void const* pData) final override;
virtual void PostCmdUpdateBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, void const* pData) final override;
virtual void PreCmdFillBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) final override;
virtual void PostCmdFillBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) final override;
virtual void PreCmdClearColorImage(WrappedVkCommandBuffer* commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearColorValue const* pColor, uint32_t rangeCount, VkImageSubresourceRange const* pRanges) final override;
virtual void PostCmdClearColorImage(WrappedVkCommandBuffer* commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearColorValue const* pColor, uint32_t rangeCount, VkImageSubresourceRange const* pRanges) final override;
virtual void PreCmdClearDepthStencilImage(WrappedVkCommandBuffer* commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearDepthStencilValue const* pDepthStencil, uint32_t rangeCount, VkImageSubresourceRange const* pRanges) final override;
virtual void PostCmdClearDepthStencilImage(WrappedVkCommandBuffer* commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearDepthStencilValue const* pDepthStencil, uint32_t rangeCount, VkImageSubresourceRange const* pRanges) final override;
virtual void PreCmdClearAttachments(WrappedVkCommandBuffer* commandBuffer, uint32_t attachmentCount, VkClearAttachment const* pAttachments, uint32_t rectCount, VkClearRect const* pRects) final override;
virtual void PostCmdClearAttachments(WrappedVkCommandBuffer* commandBuffer, uint32_t attachmentCount, VkClearAttachment const* pAttachments, uint32_t rectCount, VkClearRect const* pRects) final override;
virtual void PreCmdResolveImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageResolve const* pRegions) final override;
virtual void PostCmdResolveImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageResolve const* pRegions) final override;
virtual void PreCmdBindDescriptorSets(WrappedVkCommandBuffer* commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, VkDescriptorSet const* pDescriptorSets, uint32_t dynamicOffsetCount, uint32_t const* pDynamicOffsets) final override;
virtual void PostCmdBindDescriptorSets(WrappedVkCommandBuffer* commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, VkDescriptorSet const* pDescriptorSets, uint32_t dynamicOffsetCount, uint32_t const* pDynamicOffsets) final override;
virtual void PreCmdPushConstants(WrappedVkCommandBuffer* commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, void const* pValues) final override;
virtual void PostCmdPushConstants(WrappedVkCommandBuffer* commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, void const* pValues) final override;
virtual void PreCmdBindIndexBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) final override;
virtual void PostCmdBindIndexBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) final override;
virtual void PreCmdBindVertexBuffers(WrappedVkCommandBuffer* commandBuffer, uint32_t firstBinding, uint32_t bindingCount, VkBuffer const* pBuffers, VkDeviceSize const* pOffsets) final override;
virtual void PostCmdBindVertexBuffers(WrappedVkCommandBuffer* commandBuffer, uint32_t firstBinding, uint32_t bindingCount, VkBuffer const* pBuffers, VkDeviceSize const* pOffsets) final override;
virtual void PreCmdDraw(WrappedVkCommandBuffer* commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) final override;
virtual void PostCmdDraw(WrappedVkCommandBuffer* commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) final override;
virtual void PreCmdDrawIndexed(WrappedVkCommandBuffer* commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) final override;
virtual void PostCmdDrawIndexed(WrappedVkCommandBuffer* commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) final override;
virtual void PreCmdDrawIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) final override;
virtual void PostCmdDrawIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) final override;
virtual void PreCmdDrawIndexedIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) final override;
virtual void PostCmdDrawIndexedIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) final override;
virtual void PreCmdDispatch(WrappedVkCommandBuffer* commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) final override;
virtual void PostCmdDispatch(WrappedVkCommandBuffer* commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) final override;
virtual void PreCmdDispatchIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset) final override;
virtual void PostCmdDispatchIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset) final override;
virtual void PreCmdBindPipeline(WrappedVkCommandBuffer* commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) final override;
virtual void PostCmdBindPipeline(WrappedVkCommandBuffer* commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) final override;
virtual void PreCmdSetViewport(WrappedVkCommandBuffer* commandBuffer, uint32_t firstViewport, uint32_t viewportCount, VkViewport const* pViewports) final override;
virtual void PostCmdSetViewport(WrappedVkCommandBuffer* commandBuffer, uint32_t firstViewport, uint32_t viewportCount, VkViewport const* pViewports) final override;
virtual void PreCmdSetScissor(WrappedVkCommandBuffer* commandBuffer, uint32_t firstScissor, uint32_t scissorCount, VkRect2D const* pScissors) final override;
virtual void PostCmdSetScissor(WrappedVkCommandBuffer* commandBuffer, uint32_t firstScissor, uint32_t scissorCount, VkRect2D const* pScissors) final override;
virtual void PreCmdSetLineWidth(WrappedVkCommandBuffer* commandBuffer, float lineWidth) final override;
virtual void PostCmdSetLineWidth(WrappedVkCommandBuffer* commandBuffer, float lineWidth) final override;
virtual void PreCmdSetDepthBias(WrappedVkCommandBuffer* commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) final override;
virtual void PostCmdSetDepthBias(WrappedVkCommandBuffer* commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) final override;
virtual void PreCmdSetBlendConstants(WrappedVkCommandBuffer* commandBuffer, float blendConstants[4]) final override;
virtual void PostCmdSetBlendConstants(WrappedVkCommandBuffer* commandBuffer, float blendConstants[4]) final override;
virtual void PreCmdSetDepthBounds(WrappedVkCommandBuffer* commandBuffer, float minDepthBounds, float maxDepthBounds) final override;
virtual void PostCmdSetDepthBounds(WrappedVkCommandBuffer* commandBuffer, float minDepthBounds, float maxDepthBounds) final override;
virtual void PreCmdSetStencilCompareMask(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) final override;
virtual void PostCmdSetStencilCompareMask(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) final override;
virtual void PreCmdSetStencilWriteMask(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) final override;
virtual void PostCmdSetStencilWriteMask(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) final override;
virtual void PreCmdSetStencilReference(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) final override;
virtual void PostCmdSetStencilReference(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) final override;
virtual void PreCmdBeginQuery(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) final override;
virtual void PostCmdBeginQuery(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) final override;
virtual void PreCmdEndQuery(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t query) final override;
virtual void PostCmdEndQuery(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t query) final override;
virtual void PreCmdResetQueryPool(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) final override;
virtual void PostCmdResetQueryPool(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) final override;
virtual void PreCmdWriteTimestamp(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) final override;
virtual void PostCmdWriteTimestamp(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) final override;
virtual void PreCmdCopyQueryPoolResults(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) final override;
virtual void PostCmdCopyQueryPoolResults(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) final override;
virtual void PreCmdBeginRenderPass(WrappedVkCommandBuffer* commandBuffer, VkRenderPassBeginInfo const* pRenderPassBegin, VkSubpassContents contents) final override;
virtual void PostCmdBeginRenderPass(WrappedVkCommandBuffer* commandBuffer, VkRenderPassBeginInfo const* pRenderPassBegin, VkSubpassContents contents) final override;
virtual void PreCmdNextSubpass(WrappedVkCommandBuffer* commandBuffer, VkSubpassContents contents) final override;
virtual void PostCmdNextSubpass(WrappedVkCommandBuffer* commandBuffer, VkSubpassContents contents) final override;
virtual void PreCmdEndRenderPass(WrappedVkCommandBuffer* commandBuffer) final override;
virtual void PostCmdEndRenderPass(WrappedVkCommandBuffer* commandBuffer) final override;
virtual void PreCmdSetEvent(WrappedVkCommandBuffer* commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) final override;
virtual void PostCmdSetEvent(WrappedVkCommandBuffer* commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) final override;
virtual void PreCmdResetEvent(WrappedVkCommandBuffer* commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) final override;
virtual void PostCmdResetEvent(WrappedVkCommandBuffer* commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) final override;
virtual void PreCmdWaitEvents(WrappedVkCommandBuffer* commandBuffer, uint32_t eventCount, VkEvent const* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers) final override;
virtual void PostCmdWaitEvents(WrappedVkCommandBuffer* commandBuffer, uint32_t eventCount, VkEvent const* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers) final override;
virtual void PreCmdPipelineBarrier(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers) final override;
virtual void PostCmdPipelineBarrier(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers) final override;
virtual void PreCmdWriteBufferMarkerAMD(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) final override;
virtual void PostCmdWriteBufferMarkerAMD(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) final override;
virtual void PreCmdDrawIndirectCountAMD(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride) final override;
virtual void PostCmdDrawIndirectCountAMD(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride) final override;
virtual void PreCmdDrawIndexedIndirectCountAMD(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride) final override;
virtual void PostCmdDrawIndexedIndirectCountAMD(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride) final override;
virtual void PreCmdDebugMarkerBeginEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo) final override;
virtual void PostCmdDebugMarkerBeginEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo) final override;
virtual void PreCmdDebugMarkerEndEXT(WrappedVkCommandBuffer* commandBuffer) final override;
virtual void PostCmdDebugMarkerEndEXT(WrappedVkCommandBuffer* commandBuffer) final override;
virtual void PreCmdDebugMarkerInsertEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo) final override;
virtual void PostCmdDebugMarkerInsertEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo) final override;
virtual void PreCmdBeginDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo) final override;
virtual void PostCmdBeginDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo) final override;
virtual void PreCmdEndDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer) final override;
virtual void PostCmdEndDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer) final override;
virtual void PreCmdInsertDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo) final override;
virtual void PostCmdInsertDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo) final override;
virtual void PreCmdSetDeviceMaskKHR(WrappedVkCommandBuffer* commandBuffer, uint32_t deviceMask) final override;
virtual void PostCmdSetDeviceMaskKHR(WrappedVkCommandBuffer* commandBuffer, uint32_t deviceMask) final override;
virtual void PreCmdSetDeviceMask(WrappedVkCommandBuffer* commandBuffer, uint32_t deviceMask) final override;
virtual void PostCmdSetDeviceMask(WrappedVkCommandBuffer* commandBuffer, uint32_t deviceMask) final override;
virtual void PreCmdDispatchBaseKHR(WrappedVkCommandBuffer* commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) final override;
virtual void PostCmdDispatchBaseKHR(WrappedVkCommandBuffer* commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) final override;
virtual void PreCmdDispatchBase(WrappedVkCommandBuffer* commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) final override;
virtual void PostCmdDispatchBase(WrappedVkCommandBuffer* commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) final override;
virtual void PreCmdDrawIndirectCountKHR(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride) final override;
virtual void PostCmdDrawIndirectCountKHR(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride) final override;
virtual void PreCmdDrawIndexedIndirectCountKHR(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride) final override;
virtual void PostCmdDrawIndexedIndirectCountKHR(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride) final override;
// clang-format on