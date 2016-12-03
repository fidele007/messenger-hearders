/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNJoinableGroupPendingApprovalsTopBannerViewDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNJoinableGroupPendingApprovalsTopBannerControllerDelegate, OS_dispatch_queue;
@class MNJoinableGroupPendingApprovalsTopBannerView, FBToast, MNThreadViewModel, NSArray, FBUserSession, FBToastPresenter, NSObject, NSString;

@interface MNJoinableGroupPendingApprovalsTopBannerController : NSObject <MNJoinableGroupPendingApprovalsTopBannerViewDelegate, MNThreadViewModelConfigurable> {

	MNJoinableGroupPendingApprovalsTopBannerView* _topBannerView;
	FBToast* _toast;
	MNThreadViewModel* _threadViewModel;
	NSArray* _currentPendingApprovalRequests;
	FBUserSession* _userSession;
	FBToastPresenter* _toastPresenter;
	id<MNJoinableGroupPendingApprovalsTopBannerControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _readStateTrackingSerialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> readStateTrackingSerialQueue;                                   //@synthesize readStateTrackingSerialQueue=_readStateTrackingSerialQueue - In the implementation block
@property (assign,nonatomic,__weak) FBToastPresenter * toastPresenter;                                                    //@synthesize toastPresenter=_toastPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<MNJoinableGroupPendingApprovalsTopBannerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBToastPresenter *)toastPresenter;
-(void)setToastPresenter:(FBToastPresenter *)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)_showPendingApprovalRequestToast;
-(void)_shouldShowPendingApprovalRequestsToastWithCompletion:(/*^block*/id)arg1 ;
-(void)showPendingApprovalRequestsToastIfNecessary;
-(void)dismissPendingApprovalRequestsToast:(BOOL)arg1 ;
-(void)_dispatchOnMainThreadWithShowToastResult:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)joinableGroupPendingApprovalsTopBannerViewDidPressViewApprovalsButton:(id)arg1 ;
-(void)joinableGroupPendingApprovalsTopBannerViewDidDismissBanner:(id)arg1 ;
-(id)initWithSession:(id)arg1 toastPresenter:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)readStateTrackingSerialQueue;
-(void)setReadStateTrackingSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<MNJoinableGroupPendingApprovalsTopBannerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNJoinableGroupPendingApprovalsTopBannerControllerDelegate>)delegate;
@end
