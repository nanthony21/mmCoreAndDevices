#include "NotificationEntry.h"

NotificationEntry::NotificationEntry() :
    pFrameData_(0), frameDataSz_(0)
{
}

NotificationEntry::NotificationEntry(const void* pData, unsigned int dataSz, const PvFrameInfo& metadata) :
    pFrameData_(pData),
    frameDataSz_(dataSz),
    frameMetaData_(metadata)
{
}

const PvFrameInfo& NotificationEntry::FrameMetadata() const
{
    return frameMetaData_;
}

const void* NotificationEntry::FrameData() const
{
    return pFrameData_;
}

unsigned int NotificationEntry::FrameDataSize() const
{
    return frameDataSz_;
}