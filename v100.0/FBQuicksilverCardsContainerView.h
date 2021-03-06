/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, UIImageView, UIView, NSMutableArray, NSString;

@interface FBQuicksilverCardsContainerView : UIView <UIScrollViewDelegate> {

	UIScrollView* _cardsScrollView;
	UIImageView* _gameLogo;
	UIView* _outerViewForCards;
	NSMutableArray* _cards;
	long long _displayPosition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setGameLogoImageWithSession:(id)arg1 appIconURL:(id)arg2 ;
-(void)_didFinishAnimateIn;
-(void)_didFinishAnimateOut;
-(CGSize)_outerViewForCardsSize;
-(void)_layoutAllCardsContent;
-(void)animateInWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 appIconURL:(id)arg2 ;
-(void)appendCardContentView:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
@end

