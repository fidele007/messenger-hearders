/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>

@protocol MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, MNPaymentsPeerToPeerPaymentRequestToastCoordinatorDelegate;
@class NSString, MNPaymentsPeerToPeerPaymentRequestCoordinator, FBPaymentsPeerToPeerNavigationCoordinator, MNUserStore, NSMutableDictionary;

@interface MNPaymentsPeerToPeerPaymentRequestToastCoordinator : NSObject <MNPaymentsPeerToPeerPaymentRequestCoordinatorListener> {

	NSString* _currentUserId;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _peerToPeerPaymentRequestCoordinator;
	FBPaymentsPeerToPeerNavigationCoordinator* _peerToPeerNavigationCoordinator;
	MNUserStore* _userStore;
	NSMutableDictionary* _threadKeyToToastRequestInfoMap;
	id<MNPaymentsPeerToPeerPaymentRequestCoordinatorListener> _mainQueueListener;
	id<MNPaymentsPeerToPeerPaymentRequestToastCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsPeerToPeerPaymentRequestToastCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdatePaymentRequest:(id)arg1 ;
-(id)_toastForThreadKey:(id)arg1 ;
-(void)_fetchToastForThreadKey:(id)arg1 ;
-(void)_cleanUpForThreadKey:(id)arg1 ;
-(void)_prepareToastRequestForThreadKey:(id)arg1 ;
-(void)_didFetchRequester:(id)arg1 paymentRequest:(id)arg2 forThreadKey:(id)arg3 ;
-(void)_updateCurrentFetchIfNecessary:(id)arg1 ;
-(id)initWithCurrentUserId:(id)arg1 userStore:(id)arg2 peerToPeerPaymentRequestCoordinator:(id)arg3 peerToPeerNavigationCoordinator:(id)arg4 ;
-(id)toastForUserId:(id)arg1 ;
-(id)toastForGroupThreadWithRequesteeId:(id)arg1 withGroupThreadId:(id)arg2 ;
-(void)setDelegate:(id<MNPaymentsPeerToPeerPaymentRequestToastCoordinatorDelegate>)arg1 ;
-(id<MNPaymentsPeerToPeerPaymentRequestToastCoordinatorDelegate>)delegate;
@end
