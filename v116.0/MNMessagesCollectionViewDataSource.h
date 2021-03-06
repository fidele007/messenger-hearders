/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@protocol MNMessageCellControlling, MNMessageCollectionViewCellDelegate, MNMessageLoadingCellProviding, MNMessagesCollectionViewDataSourceDelegate, MNMessageCellElementControllerActionHandler;
@class MNThreadContextCellController, MNMessagesViewModel, MNThreadContextViewModel, NSString;

@interface MNMessagesCollectionViewDataSource : NSObject <UICollectionViewDataSource> {

	id<MNMessageCellControlling> _messageCellController;
	id<MNMessageCollectionViewCellDelegate> _messageCellDelegate;
	MNThreadContextCellController* _threadContextCellController;
	id<MNMessageLoadingCellProviding> _loadingCellProvider;
	id<MNMessagesCollectionViewDataSourceDelegate> _delegate;
	id<MNMessageCellElementControllerActionHandler> _actionHandler;
	MNMessagesViewModel* _messagesViewModel;
	MNThreadContextViewModel* _threadContextViewModel;

}

@property (assign,nonatomic,__weak) id<MNMessagesCollectionViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MNMessageCellElementControllerActionHandler> actionHandler;               //@synthesize actionHandler=_actionHandler - In the implementation block
@property (copy) MNMessagesViewModel * messagesViewModel;                                                 //@synthesize messagesViewModel=_messagesViewModel - In the implementation block
@property (copy) MNThreadContextViewModel * threadContextViewModel;                                       //@synthesize threadContextViewModel=_threadContextViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNThreadContextViewModel *)threadContextViewModel;
-(id)messageRowForIndexPath:(id)arg1 ;
-(id)initWithMessageCellController:(id)arg1 messageCellDelegate:(id)arg2 threadContextCellController:(id)arg3 loadingCellProvider:(id)arg4 ;
-(BOOL)isValidIndexPath:(id)arg1 ;
-(id)lastMessageRowMatchingAnyOfTypes:(id)arg1 ;
-(id)lastMessageRow;
-(MNMessagesViewModel *)messagesViewModel;
-(void)updateTypingCell:(id)arg1 withMessageRow:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateMessageCell:(id)arg1 withMessageRow:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateMessageView:(id)arg1 withMessageRow:(id)arg2 animated:(BOOL)arg3 ;
-(id)lastMessageRowNotByViewer;
-(id)messageRowForMessageWithId:(id)arg1 ;
-(void)setThreadContextViewModel:(MNThreadContextViewModel *)arg1 ;
-(void)setMessagesViewModel:(MNMessagesViewModel *)arg1 ;
-(id)messageRowForOldestFailedMessage;
-(id)_collectionView:(id)arg1 messageCellForItemAtIndexPath:(id)arg2 ;
-(void)_configureSupplementaryContainerView:(id)arg1 withElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)lastMessageRowOfType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNMessagesCollectionViewDataSourceDelegate>)arg1 ;
-(id<MNMessagesCollectionViewDataSourceDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setActionHandler:(id<MNMessageCellElementControllerActionHandler>)arg1 ;
-(id<MNMessageCellElementControllerActionHandler>)actionHandler;
@end

