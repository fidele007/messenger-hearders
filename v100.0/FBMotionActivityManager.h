/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMotionActivityWorker;

@interface FBMotionActivityManager : NSObject {

	BOOL _motionActivityManagerActivated;
	FBMotionActivityWorker* _longTrackingWorker;
	FBMotionActivityWorker* _shortTrackingWorker;

}
-(id)initWithUserSession:(id)arg1 ;
-(void)recentActivityWithTrackingLength:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithLongSessionWorker:(id)arg1 shortSessionWorker:(id)arg2 activated:(BOOL)arg3 ;
@end

