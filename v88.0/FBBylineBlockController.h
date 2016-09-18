/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBackgroundDeallocatedObject.h>
#import <Messenger/FBBylineNodeDelegate.h>
#import <Messenger/FBRichStoryBlockController.h>

@protocol FBBylineNode, FBRichStoryEntityBylineProtocol;
@class ASDisplayNode, FBRichStoryBlockDisplayContext, FBBylineViewModel, FBUserSession, FBNABlockAnalyticsLogger, NSString;

@interface FBBylineBlockController : FBBackgroundDeallocatedObject <FBBylineNodeDelegate, FBRichStoryBlockController> {

	ASDisplayNode*<FBBylineNode> _bylineNode;
	FBRichStoryBlockDisplayContext* _displayContext;
	id<FBRichStoryEntityBylineProtocol> _bylineEntity;
	FBBylineViewModel* _bylineViewModel;
	FBUserSession* _session;
	long long _style;
	FBNABlockAnalyticsLogger* _analyticsLogger;

}

@property (nonatomic,readonly) FBNABlockAnalyticsLogger * analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(long long)styleForBylineViewModel:(id)arg1 ;
-(FBNABlockAnalyticsLogger *)analyticsLogger;
-(id)richStoryRenderable;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 textRange:(NSRange)arg5 ;
-(BOOL)textNode:(id)arg1 shouldHighlightLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)_handleIntentTarget:(id)arg1 ;
-(void)bylineNode:(id)arg1 didTapProfilePictureAtIndex:(unsigned long long)arg2 ;
@end

