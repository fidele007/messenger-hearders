/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMessageLiveLocationTrayMapViewDelegate.h>

@protocol MNMessageLiveLocationTrayMapViewControllerDelegate;
@class FBUserSession, MNMessageLiveLocationTrayMapView, CLLocation, NSString;

@interface MNMessageLiveLocationTrayMapViewController : UIViewController <MNMessageLiveLocationTrayMapViewDelegate> {

	FBUserSession* _session;
	MNMessageLiveLocationTrayMapView* _trayMapView;
	id<MNMessageLiveLocationTrayMapViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageLiveLocationTrayMapViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * currentLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageLiveLocationTrayMapView:(id)arg1 didTapToSendLiveLocation:(id)arg2 ;
-(void)messageLiveLocationTrayMapViewDidTapToStopSendingLiveLocation:(id)arg1 ;
-(void)mesageLiveLocationTrayMapViewDidTapToSearch:(id)arg1 ;
-(id)messageLiveLocationTrayMapView:(id)arg1 profileViewControllerForViewModel:(id)arg2 ;
-(void)setStaleStateForLiveLocation:(id)arg1 isStale:(BOOL)arg2 ;
-(id)initWithSession:(id)arg1 initialLocation:(id)arg2 configManager:(id)arg3 ;
-(void)setDelegate:(id<MNMessageLiveLocationTrayMapViewControllerDelegate>)arg1 ;
-(id<MNMessageLiveLocationTrayMapViewControllerDelegate>)delegate;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CLLocation *)currentLocation;
@end

