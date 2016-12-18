/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Messenger/MNProfilePreviewing.h>
#import <Messenger/FBWebRTCCellPresenceListener.h>

@protocol MNAvatarImageDecorating, FBWebRTCCallCellDelegate;
@class UILabel, NSMutableArray, UIImageView, UIView, MNDateFormatter, FBWebRTCCallButtonImageProvider, FBWebRTCCallButton, MNConversationContact, UITapGestureRecognizer, MNProfileImageModel, MNProfileImageView, NSString;

@interface FBWebRTCCallCell : UITableViewCell <MNProfilePreviewing, FBWebRTCCellPresenceListener> {

	UILabel* _nameLabel;
	UILabel* _callsCountLabel;
	UILabel* _detailsLabel;
	UILabel* _dateLabel;
	NSMutableArray* _callDirectionImages;
	UIImageView* _maskImage;
	UIView* _lineSeparator;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNDateFormatter* _dateFormatter;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	unsigned long long _iconType;
	FBWebRTCCallButton* _audioCallButton;
	FBWebRTCCallButton* _videoCallButton;
	MNConversationContact* _contact;
	BOOL _advancedAggregationFormat;
	long long _maxAggDirectionImages;
	long long _aggregationDirectionImages;
	UITapGestureRecognizer* _tapRecognizer;
	UIView* _rightBorderView;
	BOOL _hidesLineSeparator;
	id<FBWebRTCCallCellDelegate> _delegate;
	unsigned long long _style;
	unsigned long long _experimentMode;
	MNProfileImageModel* _profileImageModel;
	MNProfileImageView* _profileImageView;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hidesLineSeparator;                                   //@synthesize hidesLineSeparator=_hidesLineSeparator - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long experimentMode;                       //@synthesize experimentMode=_experimentMode - In the implementation block
@property (nonatomic,copy) MNProfileImageModel * profileImageModel;                     //@synthesize profileImageModel=_profileImageModel - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * profileImageView;                   //@synthesize profileImageView=_profileImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getCallDescriptionStringOutgoing:(BOOL)arg1 answered:(BOOL)arg2 callType:(unsigned long long)arg3 ;
+(double)cellHeight;
-(MNProfileImageView *)profileImageView;
-(MNProfileImageModel *)profileImageModel;
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 avatarImageDecoration:(id)arg2 callButtonImageProvider:(id)arg3 dateFormatter:(id)arg4 style:(unsigned long long)arg5 directVideoCallingEnabled:(BOOL)arg6 advancedAggregationFormat:(BOOL)arg7 experiment:(unsigned long long)arg8 ;
-(void)configureCellAsSingleSuggestedEntryWithContact:(id)arg1 platformIconType:(unsigned long long)arg2 ;
-(void)setHidesLineSeparator:(BOOL)arg1 ;
-(void)configureCellAsSingleEntryWithContact:(id)arg1 platformIconType:(unsigned long long)arg2 videoConferenceEnabled:(BOOL)arg3 ;
-(void)setProfileImageModel:(MNProfileImageModel *)arg1 ;
-(void)_audioButtonClick;
-(void)_videoButtonClick;
-(void)_didTapOnCell:(id)arg1 ;
-(void)_layoutCallDetails;
-(void)_setPlatformIconType:(unsigned long long)arg1 ;
-(void)_setNameLabelColorForHasAnswered:(id)arg1 ;
-(void)_setCallDirectionImageWithCallAnswered:(id)arg1 ;
-(void)_setDetailsLabelTextWithStartTime:(id)arg1 ;
-(void)_executeActionTap:(long long)arg1 ;
-(BOOL)_shouldSetDefaultColorForCall:(id)arg1 ;
-(void)_setCallDirectionImageWithCallAnswered:(id)arg1 isConference:(BOOL)arg2 isOutgoing:(BOOL)arg3 isAnswered:(BOOL)arg4 isExceed:(BOOL)arg5 ;
-(BOOL)updatePresenceValue:(id)arg1 ;
-(void)_setDetailsLabelTextWithCallOutgoing:(id)arg1 ;
-(void)_setDateLabelTextWithStartTime:(id)arg1 ;
-(unsigned long long)experimentMode;
-(BOOL)hidesLineSeparator;
-(void)setDelegate:(id<FBWebRTCCallCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCCallCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned long long)style;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(id)personId;
@end

