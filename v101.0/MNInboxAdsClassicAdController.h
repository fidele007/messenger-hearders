/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBusinessButtonViewDelegate.h>
#import <Messenger/MNInboxAdsViewDelegate.h>

@class FBUserSession, MNAdaptiveImageDownloader, MNProfileImageViewController, MNThreadImageManager, MNInboxAdsManageAdHandler, MNInboxAdsClickHandler, MNInboxAdsImpressionLogger, NSString;

@interface MNInboxAdsClassicAdController : NSObject <MNBusinessButtonViewDelegate, MNInboxAdsViewDelegate> {

	FBUserSession* _session;
	MNAdaptiveImageDownloader* _adaptiveImageDownloader;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	MNInboxAdsManageAdHandler* _manageAdHandler;
	MNInboxAdsClickHandler* _adClickHandler;
	MNInboxAdsImpressionLogger* _impressionLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 adaptiveImageDownloader:(id)arg2 profileImageViewController:(id)arg3 threadImageManager:(id)arg4 manageAdHandler:(id)arg5 inboxAdClickHandler:(id)arg6 impressionLogger:(id)arg7 ;
-(void)setupClassicAdCell:(id)arg1 withViewModel:(id)arg2 ;
-(void)unitControllerWillAppear:(id)arg1 ;
-(void)unitControllerWillDisappear:(id)arg1 ;
-(void)didSelectAdCell:(id)arg1 withViewModel:(id)arg2 ;
-(void)adCellWillAppear:(id)arg1 withViewModel:(id)arg2 ;
-(void)adCellWillDisappear:(id)arg1 withViewModel:(id)arg2 ;
-(void)buttonViewWasClicked:(id)arg1 ;
-(void)didTapSettingsButtonForAdsView:(id)arg1 ;
@end

