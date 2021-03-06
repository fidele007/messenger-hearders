/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNProfServicesBookingViewDelegate;
@class FBUserSession, MNProfServicesBookingXMALegacyView, FBProfServicesBookingDataModel, NSString;

@interface MNProfServicesBookingView : UIControl <MNAttachmentView> {

	FBUserSession* _session;
	MNProfServicesBookingXMALegacyView* _legacyXMAView;
	FBProfServicesBookingDataModel* _viewModel;
	id<MNProfServicesBookingViewDelegate> _delegate;

}

@property (nonatomic,copy) FBProfServicesBookingDataModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNProfServicesBookingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)setDelegate:(id<MNProfServicesBookingViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNProfServicesBookingViewDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
-(FBProfServicesBookingDataModel *)viewModel;
-(void)setViewModel:(FBProfServicesBookingDataModel *)arg1 ;
@end

