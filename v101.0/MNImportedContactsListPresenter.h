/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactImportDialogDismissalListener.h>
#import <Messenger/MNSyncPersonsDialogListViewListener.h>
#import <Messenger/MNImportedContactCardViewListener.h>

@protocol MNSyncPersonsListDisplayerAvailabilityListener;
@class MNNewThreadNavigationCoordinator, MNContactImportAnalyticsLogger, FBSyncPerson, FBGraphQLImportedContactRemover, MNSyncPersonsDialogListView, MNSyncPersonsDialogListViewListenerAnnouncer, MNThreadParticipantNameFormatter, MNCDNProfileImageDownloader, MNContactImportDialogViewController, MNPeopleCellFactory, MNNavigationCoordinator, NSString;

@interface MNImportedContactsListPresenter : NSObject <MNContactImportDialogDismissalListener, MNSyncPersonsDialogListViewListener, MNImportedContactCardViewListener> {

	MNNewThreadNavigationCoordinator* _newThreadNavigationCoordinator;
	MNContactImportAnalyticsLogger* _analyticsLogger;
	FBSyncPerson* _currentlySelectedPerson;
	FBGraphQLImportedContactRemover* _importedContactRemover;
	MNSyncPersonsDialogListView* _listView;
	MNSyncPersonsDialogListViewListenerAnnouncer* _listViewEventAnnouncer;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNContactImportDialogViewController* _viewController;
	MNPeopleCellFactory* _peopleCellFactory;
	MNNavigationCoordinator* _navigationCoordinator;
	id<MNSyncPersonsListDisplayerAvailabilityListener> _listDisplayerAvailabilityListener;

}

@property (assign,nonatomic,__weak) id<MNSyncPersonsListDisplayerAvailabilityListener> listDisplayerAvailabilityListener;              //@synthesize listDisplayerAvailabilityListener=_listDisplayerAvailabilityListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mainActionButtonTapped;
-(void)primaryAuxiliaryButtonTapped;
-(void)secondaryAuxiliaryButtonTapped;
-(void)contactImportDialogDismissed;
-(void)confirmationButtonPressed;
-(id)initWithProfileImageDownloader:(id)arg1 newThreadNavigationCoordinator:(id)arg2 analyticsLogger:(id)arg3 importedContactRemover:(id)arg4 nameFormatter:(id)arg5 listDisplayerAvailabilityListener:(id)arg6 peopleCellFactory:(id)arg7 navigationCoordinator:(id)arg8 ;
-(void)presentImportedContactsList;
-(id<MNSyncPersonsListDisplayerAvailabilityListener>)listDisplayerAvailabilityListener;
-(void)setListDisplayerAvailabilityListener:(id<MNSyncPersonsListDisplayerAvailabilityListener>)arg1 ;
-(void)tappedSyncPerson:(id)arg1 ;
@end
