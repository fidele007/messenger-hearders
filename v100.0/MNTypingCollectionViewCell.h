/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNCollectionViewLayoutAttributesTracking.h>

@class MNMessageBubbleView, FBTypingIndicatorView, MNMessageRow, UICollectionViewLayoutAttributes, NSString;

@interface MNTypingCollectionViewCell : UICollectionViewCell <FBClassProvidable, MNCollectionViewLayoutAttributesTracking> {

	MNMessageBubbleView* _bubbleView;
	FBTypingIndicatorView* _typingIndicator;
	MNMessageRow* _messageRow;
	UICollectionViewLayoutAttributes* _layoutAttributes;
	MNTypingCellLayoutSpec _layoutSpec;

}

@property (nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,copy) MNMessageRow * messageRow;                                        //@synthesize messageRow=_messageRow - In the implementation block
@property (assign,nonatomic) MNTypingCellLayoutSpec layoutSpec;                              //@synthesize layoutSpec=_layoutSpec - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNMessageRow *)messageRow;
-(void)setMessageRow:(MNMessageRow *)arg1 ;
-(void)setLayoutSpec:(MNTypingCellLayoutSpec)arg1 ;
-(void)setMessageRow:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithBubbleDisplayConfigurer:(id)arg1 ;
-(MNTypingCellLayoutSpec)layoutSpec;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
@end

