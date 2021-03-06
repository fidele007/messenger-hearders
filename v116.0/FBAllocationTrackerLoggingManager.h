/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FBAllocationTrackerCTScanLogger;

@interface FBAllocationTrackerLoggingManager : NSObject {

	BOOL _userOptedIn;
	BOOL _passedGK;
	BOOL _forced;
	NSObject*<OS_dispatch_queue> _queue;
	FBAllocationTrackerCTScanLogger* _ctscanLogger;

}
+(void)startTrackingAllocationsIfEnabled;
+(id)sharedManager;
-(void)forceOn;
-(void)_startAllocationTrackerIfPossible;
-(void)_CTScanStartTrackingAllocations;
-(void)userOptedIn;
-(void)userPassedGK;
-(id)init;
@end

