/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBAVAssetSegment, NSString;

@interface FBUploadPartition : NSObject <NSCoding> {

	FBAVAssetSegment* _segment;
	unsigned long long _startOffset;
	unsigned long long _endOffset;
	NSString* _relativeSegmentCachePath;

}

@property (nonatomic,retain) FBAVAssetSegment * segment;                     //@synthesize segment=_segment - In the implementation block
@property (nonatomic,readonly) unsigned long long startOffset;               //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long endOffset;                 //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,copy) NSString * relativeSegmentCachePath;              //@synthesize relativeSegmentCachePath=_relativeSegmentCachePath - In the implementation block
+(id)newWithAssetSegment:(id)arg1 range:(NSRange)arg2 ;
+(id)_getCachePath;
+(id)_getCacheUrl;
-(unsigned long long)segmentSize;
-(void)setSegment:(FBAVAssetSegment *)arg1 ;
-(NSString *)relativeSegmentCachePath;
-(void)setRelativeSegmentCachePath:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)endOffset;
-(unsigned long long)startOffset;
-(FBAVAssetSegment *)segment;
@end

