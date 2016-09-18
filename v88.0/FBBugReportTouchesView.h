/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBBugReportTouchLayerDelegate.h>
#import <Messenger/FBShakeWindowEventListener.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface FBBugReportTouchesView : UIView <FBBugReportTouchLayerDelegate, FBShakeWindowEventListener> {

	NSMutableDictionary* _touchesActive;
	NSMutableArray* _touchesReusePool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bugReportTouchLayerWillDisappear:(id)arg1 ;
-(void)bugReportTouchLayerDidDisappear:(id)arg1 ;
-(void)_clearAllTouches;
-(id)_newTouchLayer:(id)arg1 ;
-(void)shakeWindow:(id)arg1 didReceiveEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

