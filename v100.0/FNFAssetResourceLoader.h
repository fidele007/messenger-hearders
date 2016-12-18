/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFAssetResourceLoaderDelegate, OS_dispatch_queue;
@class NSObject, NSString, NSSet;

@interface FNFAssetResourceLoader : NSObject {

	id<FNFAssetResourceLoaderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _videoID;
	NSString* _trackerID;
	NSSet* _analyticsTags;

}

@property (nonatomic,__weak,readonly) id<FNFAssetResourceLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoID;                                         //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackerID;                                       //@synthesize trackerID=_trackerID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * analyticsTags;                                      //@synthesize analyticsTags=_analyticsTags - In the implementation block
-(NSString *)videoID;
-(void)setDelegate:(id)arg1 queue:(id)arg2 videoID:(id)arg3 trackerID:(id)arg4 analyticsTags:(id)arg5 ;
-(NSString *)trackerID;
-(NSSet *)analyticsTags;
-(id<FNFAssetResourceLoaderDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

