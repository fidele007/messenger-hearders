/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@protocol MNProfServicesBookingBannerViewDelegate;
@class NSString, UILabel, UIImageView, NSArray, UIButton, FBProfServicesBookingDataModel;

@interface MNProfServicesBookingBannerOverviewView : UIControl {

	unsigned long long _count;
	NSString* _userName;
	UILabel* _overviewLabel;
	UIImageView* _reminderIcon;
	id<MNProfServicesBookingBannerViewDelegate> _delegate;
	NSArray* _bookingStatus;
	UIButton* _createAppointmentButton;
	UILabel* _statusLabel;
	long long _bannerOverviewViewType;
	FBProfServicesBookingDataModel* _viewModel;

}
-(id)_reminderIcon;
-(void)_tappedOverview;
-(void)configureWithCount:(unsigned long long)arg1 bookingStatus:(id)arg2 userName:(id)arg3 viewModel:(id)arg4 bannerOverviewViewType:(long long)arg5 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

