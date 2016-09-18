/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
