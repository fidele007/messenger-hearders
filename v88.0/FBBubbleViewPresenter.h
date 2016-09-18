/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIView, FBBubbleView, FBTimer, NSString;

@interface FBBubbleViewPresenter : NSObject {

	UIView* _hostingView;
	UIView* _contentView;
	FBBubbleView* _bubble;
	FBTimer* _dismissalTimer;
	BOOL _presented;
	unsigned long long _forcedArrowPosition;
	NSString* _text;
	CGPoint _anchorPoint;

}

@property (assign,nonatomic) unsigned long long forcedArrowPosition;              //@synthesize forcedArrowPosition=_forcedArrowPosition - In the implementation block
@property (nonatomic,copy) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint;                                 //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented;                 //@synthesize presented=_presented - In the implementation block
+(id)newWithHostingView:(id)arg1 ;
-(void)setForcedArrowPosition:(unsigned long long)arg1 ;
-(void)performUpdates:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
-(void)presentAnimated:(BOOL)arg1 dismissAfter:(double)arg2 ;
-(void)_invalidateDismissalTimer;
-(void)_reconfigureAndLayoutBubble;
-(void)dismissAnimated:(BOOL)arg1 after:(double)arg2 ;
-(void)_handleDismiss:(BOOL)arg1 ;
-(void)_scheduleDismissalTimer:(/*^block*/id)arg1 delay:(double)arg2 ;
-(unsigned long long)forcedArrowPosition;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)isPresented;
-(void)performUpdates:(/*^block*/id)arg1 ;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)_setup;
@end

