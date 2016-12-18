/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/FBWebRTCRosterCellDelegate.h>
#import <Messenger/FBWebRTCEngineListener.h>
#import <Messenger/FBWebRTCInCallEventListener.h>
#import <Messenger/MNTooltipOverlayControllerDelegate.h>
#import <Messenger/FBWebRTCRosterHeaderReusableViewDelegate.h>

@protocol MNAvatarImageDecorating, MNPresenceSubscribing, FBWebRTCRosterDelegate;
@class NSMutableDictionary, NSDictionary, UICollectionView, UICollectionViewFlowLayout, FBWebRTCActiveUserOverlayView, FBWebRTCEngine, FBUserSession, MNUserStore, FBExperimentManager, FBWebRTCConferenceParticipantInfo, FBMUser, MNCDNProfileImageDownloader, FBWebRTCCallButtonImageProvider, MNTooltipOverlayController, FBNuxTooltip, FBTimer, NSString;

@interface FBWebRTCRosterDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, FBWebRTCRosterCellDelegate, FBWebRTCEngineListener, FBWebRTCInCallEventListener, MNTooltipOverlayControllerDelegate, FBWebRTCRosterHeaderReusableViewDelegate> {

	NSMutableDictionary* _userIdsInSection;
	NSMutableDictionary* _userIdToUserMap;
	NSMutableDictionary* _userIdToMutedMap;
	NSMutableDictionary* _userIdToStateMap;
	NSDictionary* _activeAudioLevels;
	UICollectionView* _rosterView;
	UICollectionViewFlowLayout* _tableFlowLayout;
	UICollectionViewFlowLayout* _miniFlowLayout;
	FBWebRTCActiveUserOverlayView* _activeView;
	FBWebRTCEngine* _engine;
	FBUserSession* _userSession;
	MNUserStore* _userStore;
	FBExperimentManager* _experimentManager;
	BOOL _isSingleViewVideo;
	FBWebRTCConferenceParticipantInfo* _loudestParticipant;
	FBMUser* _pinnedUser;
	BOOL _isPeerUsersAdded;
	BOOL _hideCurrentSession;
	BOOL _isVideoConference;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	id<MNPresenceSubscribing> _presenceSubscriptionService;
	MNTooltipOverlayController* _tooltipController;
	FBNuxTooltip* _ringTooltip;
	FBTimer* _ringTooltipDelayTimer;
	BOOL _darkMode;
	id<FBWebRTCRosterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCRosterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL darkMode;                                           //@synthesize darkMode=_darkMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(unsigned long long)arg2 subreason:(id)arg3 remoteEnded:(BOOL)arg4 callSummary:(id)arg5 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedInputAudioLevel:(unsigned long long)arg1 outputAudioLevel:(unsigned long long)arg2 forCall:(id)arg3 ;
-(void)callUpdatedActiveAudioLevels:(id)arg1 forCall:(id)arg2 ;
-(void)callReceivedData:(id)arg1 topic:(id)arg2 forCall:(id)arg3 ;
-(BOOL)_userId:(id)arg1 isInState:(unsigned long long)arg2 ;
-(void)_addNewUserId:(id)arg1 ;
-(void)_addUserId:(id)arg1 toState:(unsigned long long)arg2 ;
-(id)_indexPathForUserId:(id)arg1 ;
-(id)_indexPathForInsertingUserInState:(unsigned long long)arg1 ;
-(void)_swapUserId:(id)arg1 fromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(id)_userForIndexPath:(id)arg1 ;
-(BOOL)_isMutingSupportedForUserId:(id)arg1 ;
-(void)_fetchProfileImageForUser:(id)arg1 andInsertInCell:(id)arg2 ;
-(id)_effectiveSelectedIndexPath;
-(void)_setActiveIndexPath:(id)arg1 ;
-(void)_removeUserId:(id)arg1 fromState:(unsigned long long)arg2 ;
-(void)_setProfileImageForActiveUser:(id)arg1 ;
-(void)_fetchProfileImageForActiveUser:(id)arg1 ;
-(void)_setUser:(id)arg1 toState:(unsigned long long)arg2 ;
-(void)_setupOrCancelRingTooltipIfNeeded;
-(void)_showRingTooltipIfPossible;
-(id)_getFirstVisiblePeerRingView;
-(void)rosterCell:(id)arg1 didTapMuteForUser:(id)arg2 ;
-(void)rosterCell:(id)arg1 didTapRingForUser:(id)arg2 ;
-(void)tooltipOverlayController:(id)arg1 didAutoHideTooltip:(id)arg2 ;
-(void)tooltipOverlayController:(id)arg1 didReceiveTouchOnTooltip:(id)arg2 ;
-(void)rosterHeaderReusableView:(id)arg1 didSelectRingAllButton:(id)arg2 ;
-(id)initWithImageDownloader:(id)arg1 callButtonImageProvider:(id)arg2 userSession:(id)arg3 userStore:(id)arg4 experimentManager:(id)arg5 avatarImageDecoration:(id)arg6 presenceSubscriptionService:(id)arg7 isSingleViewVideo:(BOOL)arg8 isVideoConference:(BOOL)arg9 ;
-(void)configureWithEngine:(id)arg1 rosterView:(id)arg2 activeView:(id)arg3 ;
-(void)_setUser:(id)arg1 isMuted:(BOOL)arg2 ;
-(BOOL)darkMode;
-(void)setDarkMode:(BOOL)arg1 ;
-(void)setDelegate:(id<FBWebRTCRosterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCRosterDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)refresh;
@end
