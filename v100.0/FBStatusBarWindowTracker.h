/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow;

@interface FBStatusBarWindowTracker : NSObject {

	BOOL _tracking;
	UIWindow* _statusBarWindow;

}

@property (assign,getter=isTracking,nonatomic) BOOL tracking;              //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,retain) UIWindow * statusBarWindow;                   //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
+(id)sharedTracker;
-(void)startTracking;
-(void)_windowDidBecomeVisible:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)statusBarWindow;
-(BOOL)isTracking;
-(void)setTracking:(BOOL)arg1 ;
-(void)setStatusBarWindow:(UIWindow *)arg1 ;
-(void)stopTracking;
@end

