/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNGenericFoldableAdminMessageViewDelegate.h>
#import <Messenger/MNFoldableAdminMessageView.h>
#import <Messenger/MNFoldableAdminViewStateListener.h>

@protocol MNFoldableAdminMessageViewDelegate;
@class FBLazyCreator, MNGenericFoldableAdminMessageView, MNCDNProfileImageDownloader, FBUserSession, FBMMessageKey, NSString;

@interface MNGameAdminMessageView : UIView <MNGenericFoldableAdminMessageViewDelegate, MNFoldableAdminMessageView, MNFoldableAdminViewStateListener> {

	FBLazyCreator* _gamePresenterCreator;
	MNGenericFoldableAdminMessageView* _foldableAdminMessageView;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	FBUserSession* _session;
	id _viewModel;
	id<MNFoldableAdminMessageViewDelegate> _foldDelegate;
	long long _viewState;
	FBMMessageKey* _messageKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNFoldableAdminMessageViewDelegate> foldDelegate;              //@synthesize foldDelegate=_foldDelegate - In the implementation block
@property (nonatomic,copy) id viewModel;                                                              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) long long viewState;                                                   //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,copy) FBMMessageKey * messageKey;                                                //@synthesize messageKey=_messageKey - In the implementation block
+(double)heightThatFitsWithViewModel:(id)arg1 maxWidth:(double)arg2 viewState:(long long)arg3 ;
-(void)setViewState:(long long)arg1 animated:(BOOL)arg2 ;
-(FBMMessageKey *)messageKey;
-(void)setFoldDelegate:(id<MNFoldableAdminMessageViewDelegate>)arg1 ;
-(void)viewStateDidChangeTo:(long long)arg1 forMessageKey:(id)arg2 ;
-(void)setMessageKey:(FBMMessageKey *)arg1 ;
-(id)initWithSession:(id)arg1 gamePresenterProvider:(id)arg2 profileImageDownloader:(id)arg3 ;
-(id<MNFoldableAdminMessageViewDelegate>)foldDelegate;
-(void)_scrollToSender;
-(void)genericFoldableAdminMessageViewDidTapCTAButton:(id)arg1 ;
-(void)genericFoldableAdminMessageViewDidTapFold:(id)arg1 ;
-(void)genericFoldableAdminMessageViewDidTapUnfold:(id)arg1 ;
-(id)genericFoldableAdminMessageView:(id)arg1 collectionViewCellForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(long long)viewState;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end
