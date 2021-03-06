/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNThreadLoadEventListener.h>
#import <Messenger/MNMessagesAppearanceEventListener.h>

@class MNPerfLoggingEventDescriptor, NSMutableDictionary, MNLocalThreadQuery, MNThreadViewModel, NSString;

@interface MNThreadLoadPerfLogger : NSObject <FBViewerContextClassProvidable, MNThreadLoadEventListener, MNMessagesAppearanceEventListener> {

	MNPerfLoggingEventDescriptor* _eventDescriptor;
	NSMutableDictionary* _extraDict;
	MNLocalThreadQuery* _localThreadQuery;
	unsigned long long _state;
	MNThreadViewModel* _oldThreadViewModel;
	BOOL _loadingFromNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_cleanUpCachedStates;
-(void)_markStartForThreadLoadEvent:(id)arg1 localThreadQuery:(id)arg2 ;
-(void)_markThreadLoadedWithThreadViewModel:(id)arg1 ;
-(void)_markStopWhenMessagesDidAppearWithThreadViewModel:(id)arg1 ;
-(void)_markAbortedWhenMessagesDidDisappearWithThreadViewModel:(id)arg1 ;
-(BOOL)_checkThreadDescriptorMatchesThreadViewModel:(id)arg1 ;
-(void)threadWillBeginLoadingWithLocalThreadQuery:(id)arg1 eventDescriptor:(id)arg2 ;
-(void)threadDidBeginLoadingFromNetwork:(id)arg1 ;
-(void)threadDidEndLoadingWithThreadViewModel:(id)arg1 ;
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
@end

