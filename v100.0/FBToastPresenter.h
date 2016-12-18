/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBToastPresenting.h>

@protocol FBToastViewing;
@class FBScopedToastQueue, FBFilteredToastQueue, FBQueuedToast, FBToastPresentationListenerAnnouncer, NSTimer, NSString;

@interface FBToastPresenter : NSObject <FBToastPresenting> {

	/*^block*/id _comparator;
	FBScopedToastQueue* _scopedToastQueue;
	FBFilteredToastQueue* _showableToastQueue;
	FBQueuedToast* _currentToast;
	FBToastPresentationListenerAnnouncer* _announcer;
	unsigned long long _toastShownTime;
	NSTimer* _toastShownTimer;
	BOOL _isGlobalToastPresenter;
	BOOL _locallyActive;
	id<FBToastViewing> _toastContainerView;

}

@property (nonatomic,retain,readonly) id<FBToastViewing> toastContainerView;              //@synthesize toastContainerView=_toastContainerView - In the implementation block
@property (assign,nonatomic) BOOL active;                                                 //@synthesize locallyActive=_locallyActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBToastViewing>)toastContainerView;
-(id)initWithToastContainer:(id)arg1 queuedToastComparator:(/*^block*/id)arg2 ;
-(void)showToast:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideToast:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithToastContainer:(id)arg1 toastQueue:(id)arg2 queuedToastComparator:(/*^block*/id)arg3 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_replaceCurrentToastWithToast:(id)arg1 byRequeingOldToast:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_showToast:(id)arg1 inScope:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_hideToast:(id)arg1 inScope:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)globalToastQueue;
-(void)setGlobalToastQueue:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setGlobalToastQueue:(id)arg1 ;
-(BOOL)_isLocallyOrGloballyActive;
-(void)_toastTimerExpired:(id)arg1 ;
-(void)showGlobalToast:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideGlobalToast:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

