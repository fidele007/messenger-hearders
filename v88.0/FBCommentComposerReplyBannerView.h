/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CKComponentProvider.h>

@class CKComponentHostingView, FBUserSession, FBMemComment, NSString;

@interface FBCommentComposerReplyBannerView : UIView <CKComponentProvider> {

	CKComponentHostingView* _hostingView;
	SEL _tapBannerAction;
	SEL _tapDismissBannerAction;
	FBUserSession* _session;
	FBMemComment* _comment;

}

@property (nonatomic,retain) FBMemComment * comment;                //@synthesize comment=_comment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithComment:(id)arg1 session:(id)arg2 tapBannerAction:(SEL)arg3 tapDismissBannerAction:(SEL)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBMemComment *)comment;
-(void)setComment:(FBMemComment *)arg1 ;
@end

