/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBTimer, FBRetainCycleDetector, NSObject, FBCache, NSSet;

@interface FBRetainCycleDetectorManager : NSObject {

	FBTimer* _timer;
	FBRetainCycleDetector* _detector;
	NSObject*<OS_dispatch_queue> _queue;
	FBCache* _classAttributionCache;
	NSSet* _baseClasses;

}
+(id)sharedManager;
-(void)startRetainCycleDetection;
-(id)_expandBaseClasses:(id)arg1 ;
-(void)enableWithClasses:(id)arg1 ;
-(id)init;
@end

