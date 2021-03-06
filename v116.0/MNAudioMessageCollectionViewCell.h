/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessageCollectionViewCell.h>
#import <Messenger/FBCommunicationAudioPlayerDelegate.h>
#import <Messenger/MNWebAudioManagerDelegate.h>
#import <Messenger/MNAudioPlayerBubbleViewDelegate.h>
#import <Messenger/MNDefaultAttributionViewDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>

@class FBLazyCreator, MNAudioCache, MNWebAudioManager, FBCommunicationVoicemailPlayerController, NSData, NSURL, NSString;

@interface MNAudioMessageCollectionViewCell : MNMessageCollectionViewCell <FBCommunicationAudioPlayerDelegate, MNWebAudioManagerDelegate, MNAudioPlayerBubbleViewDelegate, MNDefaultAttributionViewDelegate, FBClassProvidable> {

	FBLazyCreator* _bubbleMaskCreator;
	FBLazyCreator* _textViewCreator;
	FBLazyCreator* _playerBubbleViewCreator;
	FBLazyCreator* _highlightedPlayerBubbleViewCreator;
	FBLazyCreator* _highlightedPlayerBubbleViewMaskCreator;
	FBLazyCreator* _attributionContainerViewCreator;
	FBLazyCreator* _attributionMaskViewCreator;
	FBLazyCreator* _bubbleBackgroundView;
	MNAudioCache* _audioCache;
	MNWebAudioManager* _webAudioManager;
	FBCommunicationVoicemailPlayerController* _player;
	NSData* _audioData;
	NSURL* _audioUrl;
	double _audioDuration;
	unsigned long long _state;
	double _progress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAudioCache:(id)arg1 webAudioManager:(id)arg2 ;
-(void)_clipHighlightedContainerView;
-(void)_setAudioData:(id)arg1 ;
-(void)applyLayoutSpec:(id)arg1 ;
-(void)setMessageRow:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateBubbleBackgroundView;
-(void)_updateMessageBody;
-(void)_updatePlayerBubbleViewAnimated:(BOOL)arg1 ;
-(void)_updateBubbleMaskAnimated:(BOOL)arg1 ;
-(void)_loadAudioAttachmentViewModel:(id)arg1 ;
-(BOOL)_isMessageFailed;
-(void)_updateTopSeparatorVisibility;
-(void)_setAudioDuration:(double)arg1 ;
-(void)_loadAudioCache:(id)arg1 ;
-(void)_setupAudioData:(id)arg1 withUrl:(id)arg2 ;
-(void)_downloadAudio:(id)arg1 ;
-(void)_updateAudioTimerLabelWithDuration:(double)arg1 ;
-(double)_getProgressFromTimestamp:(double)arg1 ;
-(void)didDisappear;
-(void)onDeletionComplete;
-(void)_startAudioPlay;
-(void)_clearCacheForURL:(id)arg1 ;
-(void)audioPlayer:(id)arg1 updateState:(unsigned long long)arg2 ;
-(void)audioPlayer:(id)arg1 updateTimestamp:(double)arg2 ;
-(id)audioPlayerGetUrl:(id)arg1 ;
-(void)webAudioManager:(id)arg1 didFinishWithAudio:(id)arg2 forURL:(id)arg3 ;
-(void)webAudioManager:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(void)didTapAudioPlayer;
-(void)defaultAttributionViewDidTapOpenButton:(id)arg1 ;
-(void)doMessageContentInit;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)prepareForReuse;
-(void)_setState:(unsigned long long)arg1 ;
-(void)_setProgress:(double)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)playAudio;
-(void)willAppear;
-(void)_updateAttribution;
@end

