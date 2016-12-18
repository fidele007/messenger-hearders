/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBToastPresentationListener.h>
#import <Messenger/FBToastPresenting.h>

@class FBToastQueue, FBToastPresentationListenerAnnouncer, NSMutableArray, FBToastPresenter, NSString;

@interface FBGlobalToastPresenter : NSObject <FBToastPresentationListener, FBToastPresenting> {

	FBToastQueue* _toastQueue;
	FBToastPresentationListenerAnnouncer* _announcer;
	NSMutableArray* _delayedToastChanges;
	FBToastPresenter* _presenter;

}

@property (nonatomic,retain) FBToastPresenter * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showToast:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideToast:(id)arg1 animated:(BOOL)arg2 ;
-(void)toastWillAppear:(id)arg1 ;
-(void)toastWillDisappear:(id)arg1 ;
-(void)presenter:(id)arg1 didAcceptToast:(id)arg2 ;
-(void)presenter:(id)arg1 didRelinquishToast:(id)arg2 ;
-(id)initWithQueuedToastComparator:(/*^block*/id)arg1 ;
-(void)setPresenter:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(FBToastPresenter *)presenter;
-(void)setPresenter:(FBToastPresenter *)arg1 ;
@end

