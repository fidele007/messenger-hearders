/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@class FBKeyboardObserver, NSString;

@interface FBKeyboardStateTracker : NSObject <FBKeyboardObserverDelegate> {

	int _keyboardState;
	CGRect _keyboardBeginFrame;
	CGRect _keyboardEndFrame;
	BOOL _trackingKeyboardState;
	FBKeyboardObserver* _keyboardObserver;

}

@property (nonatomic,readonly) int keyboardState; 
@property (nonatomic,readonly) CGRect keyboardBeginFrame; 
@property (nonatomic,readonly) CGRect keyboardEndFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedKeyboardStateTracker;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserverKeyboardDidShow:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)startTrackingKeyboardState;
-(void)stopTrackingKeyboardState;
-(void)_clearKeyboardState;
-(BOOL)willKeyboardShow;
-(CGRect)keyboardBeginFrame;
-(CGRect)keyboardEndFrame;
-(void)dealloc;
-(id)init;
-(int)keyboardState;
@end
