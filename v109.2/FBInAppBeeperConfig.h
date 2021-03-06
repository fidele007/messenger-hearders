/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBInAppBeeperConfig : NSObject {

	BOOL _backgroundBlur;
	double _dismissalDelay;
	long long _priority;
	long long _statusBarStyle;

}

@property (assign,nonatomic) double dismissalDelay;                 //@synthesize dismissalDelay=_dismissalDelay - In the implementation block
@property (assign,nonatomic) long long priority;                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long statusBarStyle;              //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) BOOL backgroundBlur;                   //@synthesize backgroundBlur=_backgroundBlur - In the implementation block
-(BOOL)backgroundBlur;
-(void)setBackgroundBlur:(BOOL)arg1 ;
-(id)init;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(double)dismissalDelay;
-(void)setDismissalDelay:(double)arg1 ;
@end

