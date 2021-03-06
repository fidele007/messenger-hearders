/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNPSBookingSharedCTAViewDelegate;
@class UIButton, UIView, FBProfServicesBookingDataModel;

@interface MNPSBookingSharedCTAView : UIView {

	UIButton* _CTAButton;
	UIView* _separatorView;
	unsigned long long _type;
	id<MNPSBookingSharedCTAViewDelegate> _delegate;
	FBProfServicesBookingDataModel* _viewModel;
	BOOL _actsAsAdmin;

}
+(CGSize)sizeThatFits:(CGSize)arg1 ctaType:(unsigned long long)arg2 ;
-(void)_didTapAccept;
-(void)_didTapDecline;
-(void)_configButtonAction;
-(void)_didTapAdminSchedule;
-(void)_didTapAdminDecline;
-(void)_didTapCreatAppt;
-(void)_didTapViewDetails;
-(id)initWithViewModel:(id)arg1 CTAType:(unsigned long long)arg2 delegate:(id)arg3 actsAsAdmin:(BOOL)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

