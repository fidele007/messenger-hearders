/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableSet;

@interface FBMapSnapshotter : NSObject {

	mutex _lock;
	NSMutableSet* _outstandingRequests;
	BOOL _enabled;

}

@property (getter=isEnabled) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(void)requestSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runSnapshotter:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_processCachedData:(id)arg1 key:(id)arg2 request:(id)arg3 cache:(id)arg4 ;
-(void)_serviceRequest:(id)arg1 cache:(id)arg2 cacheKey:(id)arg3 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)cancelAllRequests;
@end

