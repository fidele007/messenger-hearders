/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

