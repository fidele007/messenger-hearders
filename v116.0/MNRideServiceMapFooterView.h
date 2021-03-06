/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView;

@interface MNRideServiceMapFooterView : UIView {

	UILabel* _driverInformationTagView;
	UILabel* _driverTitleView;
	UILabel* _vehicleTitleView;
	UIImageView* _driverRatingStarView;
	UIView* _etaContainerView;
	UILabel* _etaMinutesTitleView;
	UILabel* _etaMinutesTagView;
	UIView* _horizontalFooterSeparator;
	UIView* _verticalEtaContainerSeparator;

}
-(void)_layoutSeparators;
-(void)clearEta;
-(void)_layoutEtaView;
-(void)_layoutDriverInformationView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEta:(id)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
@end

