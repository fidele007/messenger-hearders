/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesAppearanceEventListener.h>
#import <Messenger/FBMSPForcedFetchDeltaHandlerListening.h>
#import <Messenger/MNMessagesModelControllerViewModelLoadingListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNMessageRefreshing, MNThreadMessageCaching;
@class NSString;

@interface MNMessageRefreshingAdapter : NSObject <MNMessagesAppearanceEventListener, FBMSPForcedFetchDeltaHandlerListening, MNMessagesModelControllerViewModelLoadingListener, FBViewerContextClassProvidable> {

	id<MNMessageRefreshing> _messageRefresher;
	id<MNThreadMessageCaching> _threadMessageCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
-(void)messagesViewDidLoseFocus;
-(void)messagesModelController:(id)arg1 didBeginThreadViewModelLoadingWithRequest:(unsigned long long)arg2 ;
-(void)messagesModelController:(id)arg1 didBeginLongOperationForThreadViewModelLoadingWithRequest:(unsigned long long)arg2 ;
-(void)messagesModelController:(id)arg1 didFinishThreadViewModelLoadingWithRequest:(unsigned long long)arg2 threadViewModel:(id)arg3 ;
-(void)messagesModelController:(id)arg1 didFinishPropagatingThreadViewModelLoadingWithRequest:(unsigned long long)arg2 threadViewModel:(id)arg3 ;
-(void)messagesModelController:(id)arg1 didFailThreadViewModelLoadingWithRequest:(unsigned long long)arg2 ;
-(void)messagesModelController:(id)arg1 didCancelThreadViewModelLoadingWithRequest:(unsigned long long)arg2 ;
-(id)initWithMessageRefresher:(id)arg1 threadMessageCache:(id)arg2 ;
-(void)_refreshMessagesIfNeedFromThreadViewModel:(id)arg1 ;
-(void)didHandleLazyForceFetchForThreadWithKey:(id)arg1 ;
-(void)didHandleLazyForceFetchMessageWithId:(id)arg1 onThreadWithKey:(id)arg2 ;
@end

