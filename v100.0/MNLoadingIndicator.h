/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface MNLoadingIndicator : UIView {

	UIImageView* _spinnerImageView;
	BOOL _wasAnimating;
	unsigned long long _indicatorStyle;

}

@property (assign,nonatomic) unsigned long long indicatorStyle;              //@synthesize indicatorStyle=_indicatorStyle - In the implementation block
+(id)loadingIndicatorForLoginForm;
-(id)initWithIndicatorStyle:(unsigned long long)arg1 ;
-(void)_onApplicationWillResignActive:(id)arg1 ;
-(void)_updateIndicatorStyleWith:(unsigned long long)arg1 ;
-(void)_onApplicationDidBecomeActive:(id)arg1 ;
-(double)_rotationDuration;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityIdentifier;
-(void)willMoveToWindow:(id)arg1 ;
-(id)accessibilityLabel;
-(void)setIndicatorStyle:(unsigned long long)arg1 ;
-(unsigned long long)indicatorStyle;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
@end

