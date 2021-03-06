/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBUFIScrollAwayProtocol.h>

@protocol FBUFIFeedbackProtocol;
@class CKComponentHostingView, NSString;

@interface FBUFIAnnotationComponentView : UIView <FBUFIScrollAwayProtocol> {

	CKComponentHostingView* _ufiAnnotationHostingView;
	double _chromeState;
	id<FBUFIFeedbackProtocol> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBUFIFeedbackProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double chromeState;                                       //@synthesize chromeState=_chromeState - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(double)chromeState;
-(void)setChromeState:(double)arg1 ;
-(id)initWithFeedStory:(id)arg1 delegate:(id)arg2 showReactions:(BOOL)arg3 toolbox:(id)arg4 ;
-(void)_commentTapAction:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBUFIFeedbackProtocol>)delegate;
@end

