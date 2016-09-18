/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNMessageLiveLocationTrayViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@class FBUserSession, MNMessageLiveLocationUpdater, MNMessageLiveLocationConfigManager, MNThreadStore, MNThreadSummarySubscribingAnnouncer, MNMessageLiveLocationTrayViewController, MNMessageLiveLocationAnalyticsLogger, NSString;

@interface MNComposerLiveLocationExtension : MNAbstractComposerTrayExtension <MNMessageLiveLocationTrayViewControllerDelegate, FBClassProvidable> {

	FBUserSession* _session;
	MNMessageLiveLocationUpdater* _messageLiveLocationUpdater;
	MNMessageLiveLocationConfigManager* _configManager;
	MNThreadStore* _threadStore;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	MNMessageLiveLocationTrayViewController* _viewController;
	MNMessageLiveLocationAnalyticsLogger* _analyticsLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_threadKey;
-(id)_composerIcon;
-(void)didSelect:(BOOL)arg1 source:(long long)arg2 ;
-(BOOL)isEligible;
-(id)viewControllerForPresentation;
-(id)initWithSession:(id)arg1 messageLiveLocationUpdater:(id)arg2 configManager:(id)arg3 threadStore:(id)arg4 threadSummarySubscribingAnnouncer:(id)arg5 ;
-(id)messageLocationTrayViewControllerCurrentThreadKey:(id)arg1 ;
-(id)messageLocationTrayViewController:(id)arg1 didTapToSendWithLiveLocationDataToSend:(id)arg2 ;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
@end

