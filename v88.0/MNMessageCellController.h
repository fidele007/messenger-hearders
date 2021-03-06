/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNMessageCellControlling.h>
#import <Messenger/MNMessageCellLayoutStrategy.h>

@protocol MNBubbleDisplayConfiguring;
@class MNAdminMessageCellLayout, MNFoldableAdminMessageCellLayout, MNMessageCellLayout, UICollectionView, MNMessageTextDataDetector, MNAttachmentStyleRendererManager, MNAttachmentViewCachedFactory, NSString;

@interface MNMessageCellController : NSObject <FBClassProvidable, MNMessageCellControlling, MNMessageCellLayoutStrategy> {

	MNAdminMessageCellLayout* _adminMessageCellLayout;
	MNFoldableAdminMessageCellLayout* _foldableAdminMessageCellLayout;
	MNMessageCellLayout* _messageCellLayout;
	UICollectionView* _collectionView;
	MNMessageTextDataDetector* _messageTextDataDetector;
	id<MNBubbleDisplayConfiguring> _bubbleDisplayConfigurer;
	MNAttachmentStyleRendererManager* _attachmentStyleRendererManager;
	MNAttachmentViewCachedFactory* _attachmentViewCachedFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)layoutElementsForMessageRow:(id)arg1 ;
-(void)awakeWithCollectionView:(id)arg1 registrar:(id)arg2 ;
-(id)cellForMessageRow:(id)arg1 withIndexPath:(id)arg2 inCollectionView:(id)arg3 withDelegate:(id)arg4 actionHandler:(id)arg5 ;
-(void)setCellFrameLayoutForMessageCell:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCellFrameLayoutForMessageView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)messageRowCanBeUpdatedInPlace:(id)arg1 newMessageRow:(id)arg2 ;
-(BOOL)messageRowNeedsUpdateLayout:(id)arg1 newMessageRow:(id)arg2 ;
@end

