/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNHighlighting.h>
#import <Messenger/MNProfilePreviewing.h>
#import <Messenger/MNThreadPreviewing.h>

@protocol MNAvatarImageDecorating, MNConversationStartersViewDelegate;
@class UIImageView, UILabel, MNPresence, FBLazyCreator, MNGreenDotView, MNConversationStarterViewModel, MNProfileImageView, MNThreadCellLayout, UIImage, NSString;

@interface MNConversationStartersView : UIView <MNHighlighting, MNProfilePreviewing, MNThreadPreviewing> {

	UIImageView* _presenceIndicator;
	UILabel* _threadNameLabel;
	UILabel* _snippetLabel;
	UILabel* _presenceLabel;
	UIImageView* _presenceImageView;
	MNPresence* _presence;
	FBLazyCreator* _lightweightActionButtonCreator;
	MNGreenDotView* _greenDotImageView;
	BOOL _selected;
	BOOL _highlighted;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNConversationStarterViewModel* _conversationStarterViewModel;
	MNProfileImageView* _profileImageView;
	MNThreadCellLayout* _threadCellLayout;
	UIImage* _descriptionIcon;
	id<MNConversationStartersViewDelegate> _delegate;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) id<MNAvatarImageDecorating> avatarImageDecoration;                          //@synthesize avatarImageDecoration=_avatarImageDecoration - In the implementation block
@property (nonatomic,retain) MNConversationStarterViewModel * conversationStarterViewModel;              //@synthesize conversationStarterViewModel=_conversationStarterViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageView * profileImageView;                               //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,copy) MNThreadCellLayout * threadCellLayout;                                        //@synthesize threadCellLayout=_threadCellLayout - In the implementation block
@property (nonatomic,copy) UIImage * descriptionIcon;                                                    //@synthesize descriptionIcon=_descriptionIcon - In the implementation block
@property (nonatomic,retain) UIImage * lightweightActionIcon; 
@property (assign,nonatomic,__weak) id<MNConversationStartersViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                              //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                                           //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForViewModel:(id)arg1 width:(double)arg2 threadCellLayout:(id)arg3 ;
-(MNProfileImageView *)profileImageView;
-(id<MNAvatarImageDecorating>)avatarImageDecoration;
-(void)setAvatarImageDecoration:(id<MNAvatarImageDecorating>)arg1 ;
-(void)setConversationStarterViewModel:(MNConversationStarterViewModel *)arg1 ;
-(void)setDescriptionIcon:(UIImage *)arg1 ;
-(MNConversationStarterViewModel *)conversationStarterViewModel;
-(id)lightweightActionButtonCreator;
-(UIImage *)lightweightActionIcon;
-(void)_updateDescriptionText;
-(void)_updateBadgeType;
-(void)_updatePresence;
-(void)_updateDescriptionAttibutedStringWithIcon;
-(void)_tappedLightweightActionButton:(id)arg1 ;
-(UIImage *)descriptionIcon;
-(void)setLightweightActionIcon:(UIImage *)arg1 ;
-(MNThreadCellLayout *)threadCellLayout;
-(void)_layoutContentViews;
-(double)_maxTitleWidth;
-(double)_maxSnippetWidth;
-(double)_maxTextWidth;
-(void)_updateDrawCellAsSelected;
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableThreadAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setThreadCellLayout:(MNThreadCellLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNConversationStartersViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNConversationStartersViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)highlighted;
-(BOOL)selected;
-(void)_updateTitle;
@end

