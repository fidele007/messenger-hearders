/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/PARichTextInteractionHandlerDelegate.h>
#import <Messenger/FBRichStoryBlockController.h>
#import <Messenger/FBFocusableBlockController.h>

@class FBRichStoryAnnotationBlock, FBAdornedTextContentNode, PARichTextInteractionHandler, FBRichStoryBlockDisplayContext, FBUserSession, NSString, NSArray;

@interface FBTextAnnotationController : NSObject <PARichTextInteractionHandlerDelegate, FBRichStoryBlockController, FBFocusableBlockController> {

	FBRichStoryAnnotationBlock* _annotationBlock;
	FBAdornedTextContentNode* _textNode;
	PARichTextInteractionHandler* _textInteractionHandler;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBUserSession* _session;
	BOOL _allowTextSelection;

}

@property (assign,nonatomic) BOOL allowTextSelection;                              //@synthesize allowTextSelection=_allowTextSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * analyticsTrackingCodes; 
+(id)attributedStringFromAnnotationBlock:(id)arg1 inDisplayContext:(id)arg2 ;
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)textStyleForAnnotationBlock:(id)arg1 styleSheet:(id)arg2 ;
+(FBTextMetrics*)textMetricsForAnnotationBlock:(id)arg1 interfaceGuide:(id)arg2 styleSheet:(id)arg3 ;
+(long long)_textAlignmentForAnnotationPosition:(FBAnnotationPosition)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)handleIntent:(id)arg1 ;
-(id)richStoryRenderable;
-(NSArray *)analyticsTrackingCodes;
-(void)setAllowTextSelection:(BOOL)arg1 ;
-(id)initWithAnnotationBlock:(id)arg1 session:(id)arg2 displayContext:(id)arg3 ;
-(BOOL)allowTextSelection;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
-(void)didLoseFocusWithInteraction:(unsigned long long)arg1 ;
-(void)willBeginScrollingWithInteraction:(unsigned long long)arg1 ;
-(BOOL)textNode:(id)arg1 shouldLongPressLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 ;
-(id)popoverPresentationViewForRichTextNode:(id)arg1 ;
-(void)textHandler:(id)arg1 copiedText:(id)arg2 ;
-(void)textHandler:(id)arg1 openedComposerForText:(id)arg2 ;
-(id)shareableAttachmentForText:(id)arg1 ;
@end

