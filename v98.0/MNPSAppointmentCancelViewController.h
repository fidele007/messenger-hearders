/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPSAppointmentCancelViewDelegate.h>

@protocol MNPSAppointmentCancelViewControllerDelegate;
@class FBProfServicesBookingDataModel, NSString;

@interface MNPSAppointmentCancelViewController : UIViewController <MNPSAppointmentCancelViewDelegate> {

	id<MNPSAppointmentCancelViewControllerDelegate> _delegate;
	FBProfServicesBookingDataModel* _dataModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)fb_cancelViewClass;
+(id)fb_eventName;
-(id)initWithDataModel:(id)arg1 delegate:(id)arg2 ;
-(void)cancelViewDidChange:(id)arg1 ;
-(void)cancelViewDidTap:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
@end

