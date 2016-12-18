/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQPPromotionEventHandling;
#import <Messenger/Messenger-Structs.h>
@class NSMapTable, FBQPPromotion, FBUserSession, UIView;

@interface FBQPCustomRenderActionHandler : NSObject {

	NSMapTable* _basicQPButtonMap;
	NSMapTable* _additionalControlMap;
	id<FBQPPromotionEventHandling> _promotionEventHandler;
	FBQPPromotion* _promotion;
	FBUserSession* _session;
	UIView* _view;

}

@property (nonatomic,retain) FBQPPromotion * promotion;              //@synthesize promotion=_promotion - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) UIView * view;                          //@synthesize view=_view - In the implementation block
-(FBQPPromotion *)promotion;
-(void)logEvent:(id)arg1 extra:(id)arg2 ;
-(void)setPromotion:(FBQPPromotion *)arg1 ;
-(void)_handleAction:(id)arg1 event:(id)arg2 ;
-(void)dismissMegaphone;
-(id)_buttonType:(id)arg1 ;
-(void)_basicButtonTappedWithEvent:(id)arg1 ;
-(id)_addtionalAction:(id)arg1 ;
-(id)initWithPromotion:(id)arg1 frame:(CGRect)arg2 session:(id)arg3 promotionEventHandler:(id)arg4 viewClass:(Class)arg5 ;
-(void)setAsPrimaryButton:(id)arg1 ;
-(void)setAsSecondaryButton:(id)arg1 ;
-(void)setAsDismissButton:(id)arg1 ;
-(void)setControl:(id)arg1 forAction:(SEL)arg2 withControlEvent:(unsigned long long)arg3 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setUp;
@end

