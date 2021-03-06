/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBUFIFeedbackProtocol;
@class CKComponentHostingView;

@interface FBAnnotationComponentView : UIView {

	CKComponentHostingView* _ufiAnnotationHostingView;
	id<FBUFIFeedbackProtocol> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBUFIFeedbackProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithName:(id)arg1 profilePictureURL:(id)arg2 feedback:(id)arg3 delegate:(id)arg4 attributionStyle:(unsigned long long)arg5 toolbox:(id)arg6 ;
-(void)_nameTapAction:(id)arg1 ;
-(void)_commentTapAction:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBUFIFeedbackProtocol>)delegate;
@end

