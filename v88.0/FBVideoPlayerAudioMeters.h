/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBVideoPlayerAudioMeters : UIView {

	UIView* _leftMeter;
	UIView* _centerMeter;
	UIView* _rightMeter;
	BOOL _isAnimating;
	double _leftValue;
	double _centerValue;
	double _rightValue;
	BOOL _hidesWhenStopped;

}

@property (assign,nonatomic) BOOL hidesWhenStopped;              //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
-(id)newAudioMeter;
-(void)_startAnimatingIfNecessary;
-(void)_setAnimationForLayer:(id)arg1 values:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(void)_stopAnimating;
@end

