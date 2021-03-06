/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMLocationUpdateListener, OS_dispatch_queue;
@class NSObject;

@interface FBMLocationUpdateListenerAnnouncerSubcription : NSObject {

	id<FBMLocationUpdateListener> _listener;
	NSObject*<OS_dispatch_queue> _listenerQueue;

}

@property (__weak,readonly) id<FBMLocationUpdateListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> listenerQueue;                 //@synthesize listenerQueue=_listenerQueue - In the implementation block
-(id)initWithListener:(id)arg1 listenerQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)listenerQueue;
-(id<FBMLocationUpdateListener>)listener;
@end

