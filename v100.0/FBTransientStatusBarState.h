/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBTransientStatusBarState : NSObject {

	BOOL _initialStatusBarHidden;
	BOOL _statusBarHidden;
	long long _initialStatusBarStyle;
	long long _statusBarStyle;

}

@property (nonatomic,readonly) BOOL initialStatusBarHidden;                  //@synthesize initialStatusBarHidden=_initialStatusBarHidden - In the implementation block
@property (nonatomic,readonly) long long initialStatusBarStyle;              //@synthesize initialStatusBarStyle=_initialStatusBarStyle - In the implementation block
@property (nonatomic,readonly) BOOL statusBarHidden;                         //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle;                     //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
+(id)stateWithInitialStatusBarHidden:(BOOL)arg1 initialStatusBarStyle:(long long)arg2 statusBarHidden:(BOOL)arg3 ;
-(BOOL)initialToDesiredStateRequiresTransition;
-(BOOL)applicationToInitialStateRequiresTransition;
-(long long)initialStatusBarStyle;
-(BOOL)initialStatusBarHidden;
-(id)copyWithStatusBarHidden:(BOOL)arg1 ;
-(BOOL)applicationToDesiredStateRequiresTransition;
-(BOOL)statusBarHidden;
-(long long)statusBarStyle;
@end

