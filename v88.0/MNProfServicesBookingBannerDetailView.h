/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNProfServicesBookingBannerViewDelegate;
@class UILabel, FBProfServicesBookingDataModel, UIButton, UITapGestureRecognizer, UIImageView;

@interface MNProfServicesBookingBannerDetailView : UIView {

	UILabel* _productName;
	UILabel* _requestTime;
	FBProfServicesBookingDataModel* _viewModel;
	UIButton* _acceptButton;
	UIButton* _declineButton;
	UIButton* _createAppointmentButton;
	unsigned long long _buttonType;
	unsigned long long _countOfRequests;
	UILabel* _statusLabel;
	id<MNProfServicesBookingBannerViewDelegate> _delegate;
	UITapGestureRecognizer* _tapGesture;
	UIImageView* _reminderIcon;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;              //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) UIImageView * reminderIcon;                       //@synthesize reminderIcon=_reminderIcon - In the implementation block
-(void)_configBannerButtons:(BOOL)arg1 ;
-(void)_configUserInteraction;
-(void)_configReminderIcon;
-(void)_configStatusLabel:(BOOL)arg1 ;
-(void)_acceptAppointment;
-(void)_declineAppointment;
-(void)_createAppointment;
-(UIImageView *)reminderIcon;
-(UITapGestureRecognizer *)tapGesture;
-(void)_didTapDetailAppointmentView;
-(void)configureWithViewModel:(id)arg1 countOfRequests:(unsigned long long)arg2 actsAsPageAdmin:(BOOL)arg3 ;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)setReminderIcon:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
