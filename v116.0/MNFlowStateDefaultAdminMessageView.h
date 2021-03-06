/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNFoldableAdminMessageView.h>

@protocol MNFoldableAdminMessageViewDelegate;
@class FBRichTextView, FBMMessageKey, NSString;

@interface MNFlowStateDefaultAdminMessageView : UIView <MNFoldableAdminMessageView> {

	FBRichTextView* _flowStateUpdateTextView;
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
-(void)setFoldDelegate:(id<MNFoldableAdminMessageViewDelegate>)arg1 ;
-(void)setMessageKey:(FBMMessageKey *)arg1 ;
-(id<MNFoldableAdminMessageViewDelegate>)foldDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(long long)viewState;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(FBMMessageKey *)messageKey;
@end

