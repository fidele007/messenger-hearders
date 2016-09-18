/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBUploadPartition, NSString;

@interface FBSegmentedUploadPartitionState : NSObject <NSCoding> {

	FBUploadPartition* _partition;
	long long _numUploadRequestsInFlight;
	NSString* _handleForLastUploadedChunkUsingRUpload;
	NSRange _nextChunkRangeInSegment;

}

@property (nonatomic,retain) FBUploadPartition * partition;                                //@synthesize partition=_partition - In the implementation block
@property (assign,nonatomic) NSRange nextChunkRangeInSegment;                              //@synthesize nextChunkRangeInSegment=_nextChunkRangeInSegment - In the implementation block
@property (assign,nonatomic) long long numUploadRequestsInFlight;                          //@synthesize numUploadRequestsInFlight=_numUploadRequestsInFlight - In the implementation block
@property (nonatomic,copy) NSString * handleForLastUploadedChunkUsingRUpload;              //@synthesize handleForLastUploadedChunkUsingRUpload=_handleForLastUploadedChunkUsingRUpload - In the implementation block
+(id)propertiesToSkipForCoding;
-(id)initWithPartition:(id)arg1 ;
-(FBUploadPartition *)partition;
-(unsigned long long)rUploadChunkStatus;
-(NSRange)nextChunkRangeInSegment;
-(NSString *)handleForLastUploadedChunkUsingRUpload;
-(long long)numUploadRequestsInFlight;
-(void)setNumUploadRequestsInFlight:(long long)arg1 ;
-(void)setHandleForLastUploadedChunkUsingRUpload:(NSString *)arg1 ;
-(void)setNextChunkRangeInSegment:(NSRange)arg1 ;
-(BOOL)isUploadCompleted;
-(void)setPartition:(FBUploadPartition *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

