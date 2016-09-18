/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface MNRideServiceInfoCardView : UIView {

	UIView* _infoCardView;
	UILabel* _infoCardLabel;
	unsigned long long _options;
	CGPoint _hiddenCenterPoint;
	double _centerYDelta;

}
-(void)revealWithDescription:(id)arg1 color:(id)arg2 ;
-(void)_animateTextChange:(id)arg1 ;
-(void)_fadeInWithColor:(id)arg1 ;
-(void)_setInfoCardAlpha:(double)arg1 color:(id)arg2 ;
-(void)_setToHiddenCenter;
-(void)_setInfoCardTextAlpha:(double)arg1 ;
-(void)_setInfoCardDescription:(id)arg1 ;
-(void)_tryPerformDropAnimation;
-(void)_layoutInfoLabelText;
-(void)hide;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
@end
