/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageCollapsingGroupViewDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider, MNModalPresentation;
@class NSMutableDictionary, MNCDNProfileImageDownloader, FBImageDownloader, MNFoldableAdminMessageCoordinator, MNMessageCollapsingGroupManager, FBUserSession, NSString;

@interface MNFoldableAdminMessageViewFactory : NSObject <MNMessageCollapsingGroupViewDelegate, FBViewerContextClassProvidable> {

	NSMutableDictionary* _reusePoolsByIdentifier;
	id<FBProvider> _gameListPresenterProvider;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	FBImageDownloader* _imageDownloader;
	MNFoldableAdminMessageCoordinator* _foldableAdminMessageCoordinator;
	MNMessageCollapsingGroupManager* _messageCollapsingGroupManager;
	id<MNModalPresentation> _modalPresenter;
	id<FBProvider> _pollDetailViewControllerProvider;
	id<FBProvider> _voterListViewControllerProvider;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)recycleFoldableAdminMessageView:(id)arg1 ;
-(id)dequeueFoldableAdminMessageViewForViewModel:(id)arg1 ;
-(id)initWithGameListPresenterProvider:(id)arg1 profileImageDownloader:(id)arg2 imageDownloader:(id)arg3 foldableAdminMessageCoordinator:(id)arg4 messageCollapsingGroupManager:(id)arg5 modalPresenter:(id)arg6 pollDetailViewControllerProvider:(id)arg7 voterListViewControllerProvider:(id)arg8 session:(id)arg9 ;
-(id)_createGameAdminMessageView;
-(id)_createPollAdminMessageView;
-(id)_createMediaAdminMessageView;
-(void)messageCollapsingGroupViewDidTapExpandCollapse:(id)arg1 ;
@end

