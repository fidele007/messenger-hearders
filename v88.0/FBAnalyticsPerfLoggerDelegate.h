/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAnalyticsPerfLoggerDelegate <NSObject>
@required
-(void)perfLogger:(id)arg1 didMarkStartForEvent:(id)arg2 nameSpace:(id)arg3 startTime:(double)arg4;
-(void)perfLogger:(id)arg1 didMarkStopForEvent:(id)arg2 nameSpace:(id)arg3 stopTime:(double)arg4;
-(void)perfLogger:(id)arg1 didMarkCancelForEvent:(id)arg2 nameSpace:(id)arg3;
-(void)perfLogger:(id)arg1 didSetTimeMarker:(id)arg2 forEvent:(id)arg3 nameSpace:(id)arg4 time:(double)arg5;

@end
