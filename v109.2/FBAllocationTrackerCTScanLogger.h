/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface FBAllocationTrackerCTScanLogger : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)logSummaryForCTScan:(unsigned long long)arg1 ;
-(void)startLoggingForCTScan;
-(void)_logSummaryForCTScanAtRepetitionEnd;
-(void)_onCTScanAppExit;
-(id)init;
@end

