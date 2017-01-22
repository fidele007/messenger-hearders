/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSMutableArray, NSMutableDictionary;

@interface FBCarouselPagingDots : UIView {

	UIView* _dotContainerView;
	NSMutableArray* _dots;
	NSMutableDictionary* _scaleForDot;
	double _leftmostVisibleDot;
	long long _maxNumberOfVisibleDots;
	double _currentDot;
	double _rightmostVisibleDot;

}

@property (assign,nonatomic) double leftmostVisibleDot;                     //@synthesize leftmostVisibleDot=_leftmostVisibleDot - In the implementation block
@property (assign,nonatomic) double rightmostVisibleDot;                    //@synthesize rightmostVisibleDot=_rightmostVisibleDot - In the implementation block
@property (nonatomic,readonly) double dotContainerWidth; 
@property (assign,nonatomic) long long maxNumberOfVisibleDots;              //@synthesize maxNumberOfVisibleDots=_maxNumberOfVisibleDots - In the implementation block
@property (assign,nonatomic) long long numberOfDots; 
@property (assign,nonatomic) double currentDot;                             //@synthesize currentDot=_currentDot - In the implementation block
-(void)setMaxNumberOfVisibleDots:(long long)arg1 ;
-(void)setNumberOfDots:(long long)arg1 ;
-(void)setCurrentDot:(double)arg1 ;
-(void)insertDotAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(double)dotContainerWidth;
-(double)_scaleForDot:(id)arg1 ;
-(double)_xPositionForDotIndex:(double)arg1 ;
-(id)_createPagingDotImageView;
-(void)setLeftmostVisibleDot:(double)arg1 ;
-(void)setRightmostVisibleDot:(double)arg1 ;
-(void)_setScale:(double)arg1 forDot:(id)arg2 ;
-(void)_animateDot:(id)arg1 toScale:(double)arg2 completion:(/*^block*/id)arg3 ;
-(double)currentDot;
-(id)_renderDotImage;
-(long long)numberOfDots;
-(void)removeDotAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)maxNumberOfVisibleDots;
-(double)leftmostVisibleDot;
-(double)rightmostVisibleDot;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
