/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDiskCacheEventListener, OS_dispatch_queue;
@class NSObject, NSString;

@interface FBEventListenerPair : NSObject {

	id<FBDiskCacheEventListener> _fBDiskCacheEventListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _executorName;

}

@property (nonatomic,retain) id<FBDiskCacheEventListener> fBDiskCacheEventListener;              //@synthesize fBDiskCacheEventListener=_fBDiskCacheEventListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * executorName;                                              //@synthesize executorName=_executorName - In the implementation block
-(id)initWithDiskCacheEventListener:(id)arg1 queue:(id)arg2 executorName:(id)arg3 ;
-(void)setFBDiskCacheEventListener:(id<FBDiskCacheEventListener>)arg1 ;
-(void)setExecutorName:(NSString *)arg1 ;
-(id<FBDiskCacheEventListener>)fBDiskCacheEventListener;
-(NSString *)executorName;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

