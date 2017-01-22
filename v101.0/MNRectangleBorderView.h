/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface MNRectangleBorderView : UIView {

	double _strokeWidth;
	UIEdgeInsets _edgeInsets;
	UIView* _leftBorderView;
	UIView* _rightBorderView;
	UIView* _topBorderView;
	UIView* _bottomBorderView;
	UIColor* _strokeColor;

}
-(id)initWithFrame:(CGRect)arg1 strokeWidth:(double)arg2 strokeColor:(id)arg3 innerColor:(id)arg4 edgeInsets:(UIEdgeInsets)arg5 borderVisible:(unsigned long long)arg6 ;
-(CGRect)_leftBorderFrame;
-(CGRect)_rightBorderFrame;
-(CGRect)_topBorderFrame;
-(CGRect)_bottomBorderFrame;
-(void)layoutSubviews;
-(void)tintColorDidChange;
@end
