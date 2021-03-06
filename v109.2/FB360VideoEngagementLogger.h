/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBVideoPlaybackController, NSDate;

@interface FB360VideoEngagementLogger : NSObject {

	FBVideoPlaybackController* _videoPlaybackController;
	double _loggingInterval;
	NSDate* _nextLogRotatedTime;
	NSDate* _nextLogZoomedTime;

}
-(void)logHeadingReset;
-(void)maybeLogViewportRotated;
-(void)maybeLogViewportZoomed;
-(void)didUpdateGuideState:(BOOL)arg1 isAutomatic:(BOOL)arg2 ;
-(id)initWithLoggingInterval:(double)arg1 videoPlaybackController:(id)arg2 ;
@end

