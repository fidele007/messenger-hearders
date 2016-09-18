/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject;

@interface FBLazyState : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id _lazyState;
	BOOL _initialized;

}

@property (assign) BOOL initialized;              //@synthesize initialized=_initialized - In the implementation block
-(id)init;
-(BOOL)initialized;
-(void)setInitialized:(BOOL)arg1 ;
@end

