/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoUploadState.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface FBSegmentedVideoUploadItemState : FBVideoUploadState {

	BOOL _processingVideo;
	BOOL _uploadingVideo;
	BOOL _uploadAsRawData;
	int _uploadRequestInflight;
	NSMutableDictionary* _allProcessedPartitions;
	NSMutableArray* _partitionsToBeUploaded;
	unsigned long long _lastPartitionEndOffset;
	NSString* _fbId;
	NSString* _uploadId;

}

@property (nonatomic,retain) NSMutableDictionary * allProcessedPartitions;              //@synthesize allProcessedPartitions=_allProcessedPartitions - In the implementation block
@property (nonatomic,retain) NSMutableArray * partitionsToBeUploaded;                   //@synthesize partitionsToBeUploaded=_partitionsToBeUploaded - In the implementation block
@property (assign,nonatomic) BOOL processingVideo;                                      //@synthesize processingVideo=_processingVideo - In the implementation block
@property (assign,nonatomic) BOOL uploadingVideo;                                       //@synthesize uploadingVideo=_uploadingVideo - In the implementation block
@property (assign,nonatomic) unsigned long long lastPartitionEndOffset;                 //@synthesize lastPartitionEndOffset=_lastPartitionEndOffset - In the implementation block
@property (assign,nonatomic) int uploadRequestInflight;                                 //@synthesize uploadRequestInflight=_uploadRequestInflight - In the implementation block
@property (nonatomic,copy) NSString * fbId;                                             //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy) NSString * uploadId;                                         //@synthesize uploadId=_uploadId - In the implementation block
@property (assign,nonatomic) BOOL uploadAsRawData;                                      //@synthesize uploadAsRawData=_uploadAsRawData - In the implementation block
+(id)propertiesToSkipForCoding;
-(NSString *)uploadId;
-(void)setUploadId:(NSString *)arg1 ;
-(BOOL)uploadAsRawData;
-(void)setUploadAsRawData:(BOOL)arg1 ;
-(BOOL)uploadingVideo;
-(BOOL)processingVideo;
-(void)setProcessingVideo:(BOOL)arg1 ;
-(void)setUploadingVideo:(BOOL)arg1 ;
-(NSMutableArray *)partitionsToBeUploaded;
-(int)uploadRequestInflight;
-(void)setUploadRequestInflight:(int)arg1 ;
-(void)setFbId:(NSString *)arg1 ;
-(unsigned long long)lastPartitionEndOffset;
-(void)setLastPartitionEndOffset:(unsigned long long)arg1 ;
-(NSMutableDictionary *)allProcessedPartitions;
-(void)setAllProcessedPartitions:(NSMutableDictionary *)arg1 ;
-(void)setPartitionsToBeUploaded:(NSMutableArray *)arg1 ;
-(NSString *)fbId;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
@end

