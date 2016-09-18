/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAutoDownloadSettingListener.h>
#import <Messenger/FBReachabilityListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNVideoAttachmentGetter.h>
#import <Messenger/MNPushMessageReceivedListening.h>

@protocol MNAuthenticationManager;
@class MNUserSettings, MNMessageVideoAttachmentGetter, MNAutoDownloadSettingListenerAnnouncer, NSString;

@interface MNVideoAttachmentGetterCoordinator : NSObject <MNAutoDownloadSettingListener, FBReachabilityListener, FBViewerContextClassProvidable, MNVideoAttachmentGetter, MNPushMessageReceivedListening> {

	MNUserSettings* _userSettings;
	unsigned long long _reachabilityState;
	MNMessageVideoAttachmentGetter* _attachmentGetter;
	MNAutoDownloadSettingListenerAnnouncer* _autoDownloadSettingListenerAnnouncer;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didReceiveAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 preparedThreadSummary:(id)arg4 ;
-(void)didReceiveSyncMessage:(id)arg1 ;
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(void)getVideoForMessage:(id)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)autoDownloadSettingChanged;
-(void)getVideoForMessage:(id)arg1 sourceIsUser:(BOOL)arg2 ;
-(void)_startObservingAndListening;
-(void)_stopObservingAndListening;
-(BOOL)_shouldRetrieveVideo;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
