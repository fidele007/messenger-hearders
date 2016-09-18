/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNInboxPendingRequestsViewDelegate.h>
#import <Messenger/MNPendingRequestsStoreListener.h>
#import <Messenger/MNInboxPendingRequestsViewStateListening.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNInboxPendingRequestsViewControllerDelegate;
@class MNPendingRequestsStore, FBUserSession, FBMobileConfigContextManager, MNInboxPendingRequestsViewStateHandler, MNInboxPendingRequestsView, NSString;

@interface MNInboxPendingRequestsViewController : UIViewController <MNInboxPendingRequestsViewDelegate, MNPendingRequestsStoreListener, MNInboxPendingRequestsViewStateListening, FBClassProvidable> {

	MNPendingRequestsStore* _pendingRequestsStore;
	FBUserSession* _userSession;
	FBMobileConfigContextManager* _configManager;
	MNInboxPendingRequestsViewStateHandler* _pendingRequestsViewStateHandler;
	id<MNInboxPendingRequestsViewControllerDelegate> _delegate;
	MNInboxPendingRequestsView* _requestsView;

}

@property (assign,nonatomic,__weak) id<MNInboxPendingRequestsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNInboxPendingRequestsView * requestsView;                                   //@synthesize requestsView=_requestsView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithPendingRequestsStore:(id)arg1 session:(id)arg2 configManager:(id)arg3 pendingRequestsViewStateHandler:(id)arg4 ;
-(id)_generateRequestsView;
-(void)_updateRequestView;
-(void)inboxPendingRequestsViewDidTap:(id)arg1 ;
-(void)inboxPendingRequestsViewDidTapDismiss:(id)arg1 ;
-(void)pendingRequestsMetadataDidUpdateFromOldMetadata:(id)arg1 toNewMetadata:(id)arg2 ;
-(void)inboxPendingRequestsViewNeedsUpdate;
-(MNInboxPendingRequestsView *)requestsView;
-(void)setDelegate:(id<MNInboxPendingRequestsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInboxPendingRequestsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
