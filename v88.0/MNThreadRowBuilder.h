/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMLocalThreadKey, MNProfileImageModel, FBAttributedStringWithRedactedDescription, NSSet, NSString, MNThreadGenericSnippet, NSArray, MNThreadReadMark, FBStringWithRedactedDescription, FBMIndexedUserSet, FBMGroupThreadKey, MNThreadMontageThumbnail, MNAdImpressionInfo, MNThreadRowCTAViewModel, MNThreadCellLayout;

@interface MNThreadRowBuilder : NSObject {

	FBMLocalThreadKey* _localThreadKey;
	MNProfileImageModel* _profileImageModel;
	FBAttributedStringWithRedactedDescription* _threadName;
	NSSet* _threadNameEmojiFixRanges;
	NSString* _timestampText;
	unsigned long long _timestamp;
	FBAttributedStringWithRedactedDescription* _snippetText;
	NSSet* _snippetTextEmojiFixRanges;
	MNThreadGenericSnippet* _genericSnippet;
	NSString* _promotedLabelText;
	long long _snippetIndicatorType;
	unsigned long long _receiptState;
	NSArray* _sortedReadUsers;
	unsigned long long _badgeType;
	MNThreadReadMark* _readMark;
	unsigned long long _waterTimestamp;
	BOOL _isFlaggedAsImportant;
	BOOL _isMuted;
	BOOL _canReply;
	BOOL _hasMessagesSending;
	BOOL _hasRecentlyFailedMessage;
	FBStringWithRedactedDescription* _accessibilityLabel;
	FBMIndexedUserSet* _indexedUserSet;
	BOOL _isOtherUserTyping;
	FBMGroupThreadKey* _montageThreadKey;
	MNThreadMontageThumbnail* _montageThumbnail;
	MNAdImpressionInfo* _adImpressionInfo;
	MNThreadRowCTAViewModel* _ctaViewModel;
	MNThreadCellLayout* _threadCellLayout;

}
+(id)threadRow;
+(id)threadRowFromExistingThreadRow:(id)arg1 ;
-(id)withMontageThumbnail:(id)arg1 ;
-(id)withLocalThreadKey:(id)arg1 ;
-(id)withProfileImageModel:(id)arg1 ;
-(id)withThreadName:(id)arg1 ;
-(id)withThreadNameEmojiFixRanges:(id)arg1 ;
-(id)withTimestampText:(id)arg1 ;
-(id)withTimestamp:(unsigned long long)arg1 ;
-(id)withSnippetText:(id)arg1 ;
-(id)withSnippetTextEmojiFixRanges:(id)arg1 ;
-(id)withGenericSnippet:(id)arg1 ;
-(id)withPromotedLabelText:(id)arg1 ;
-(id)withSnippetIndicatorType:(long long)arg1 ;
-(id)withReceiptState:(unsigned long long)arg1 ;
-(id)withSortedReadUsers:(id)arg1 ;
-(id)withBadgeType:(unsigned long long)arg1 ;
-(id)withReadMark:(id)arg1 ;
-(id)withWaterTimestamp:(unsigned long long)arg1 ;
-(id)withIsFlaggedAsImportant:(BOOL)arg1 ;
-(id)withIsMuted:(BOOL)arg1 ;
-(id)withCanReply:(BOOL)arg1 ;
-(id)withHasMessagesSending:(BOOL)arg1 ;
-(id)withHasRecentlyFailedMessage:(BOOL)arg1 ;
-(id)withAccessibilityLabel:(id)arg1 ;
-(id)withIndexedUserSet:(id)arg1 ;
-(id)withIsOtherUserTyping:(BOOL)arg1 ;
-(id)withMontageThreadKey:(id)arg1 ;
-(id)withAdImpressionInfo:(id)arg1 ;
-(id)withCtaViewModel:(id)arg1 ;
-(id)withThreadCellLayout:(id)arg1 ;
-(id)build;
@end

