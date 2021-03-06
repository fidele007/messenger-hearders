/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MNMessageLocalNotificationOtherDeviceActivityStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _lastWebSelfSendTime;
	unsigned long long _lastNonWebActivityTime;

}

@property (assign,nonatomic) unsigned long long lastWebSelfSendTime; 
@property (assign,nonatomic) unsigned long long lastNonWebActivityTime; 
-(void)_clearAllActivity;
-(void)setLastWebSelfSendTime:(unsigned long long)arg1 ;
-(unsigned long long)lastWebSelfSendTime;
-(void)setLastNonWebActivityTime:(unsigned long long)arg1 ;
-(unsigned long long)lastNonWebActivityTime;
-(void)clearAllActivity;
-(id)initWithQueue:(id)arg1 ;
@end

