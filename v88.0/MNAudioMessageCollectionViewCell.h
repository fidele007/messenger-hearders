/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessageCollectionViewCell.h>
#import <Messenger/FBCommunicationAudioPlayerDelegate.h>
#import <Messenger/MNWebAudioManagerDelegate.h>
#import <Messenger/MNAudioPlayerBubbleViewDelegate.h>
#import <Messenger/MNDefaultAttributionViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@class FBLazyCreator, MNAudioCache, MNWebAudioManager, FBCommunicationAudioPlayer, NSData, NSURL, NSString;

@interface MNAudioMessageCollectionViewCell : MNMessageCollectionViewCell <FBCommunicationAudioPlayerDelegate, MNWebAudioManagerDelegate, MNAudioPlayerBubbleViewDelegate, MNDefaultAttributionViewDelegate, FBClassProvidable> {

	FBLazyCreator* _bubbleMaskCreator;
	FBLazyCreator* _textViewCreator;
	FBLazyCreator* _playerBubbleViewCreator;
	FBLazyCreator* _highlightedPlayerBubbleViewCreator;
	FBLazyCreator* _highlightedPlayerBubbleViewMaskCreator;
	FBLazyCreator* _attributionContainerViewCreator;
	FBLazyCreator* _attributionMaskViewCreator;
	FBLazyCreator* _bubbleBackgroundView;
	FBLazyCreator* _flowerCornersViewCreator;
	MNAudioCache* _audioCache;
	MNWebAudioManager* _webAudioManager;
	FBCommunicationAudioPlayer* _player;
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
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAudioCache:(id)arg1 webAudioManager:(id)arg2 ;
-(void)_clipHighlightedContainerView;
-(void)_setAudioData:(id)arg1 ;
-(void)applyLayoutSpec:(id)arg1 ;
-(void)setMessageRow:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateBubbleBackgroundView;
-(void)_updateMessageBody;
-(void)_updatePlayerBubbleViewAnimated:(BOOL)arg1 ;
-(void)_updateBubbleMaskAnimated:(BOOL)arg1 ;
-(void)_updateFlowerCornersView;
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
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)_setProgress:(double)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)_setState:(unsigned long long)arg1 ;
-(void)playAudio;
-(void)willAppear;
-(void)_updateAttribution;
@end

