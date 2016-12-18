/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryFrameSetter.h>

@class FBRichStoryLayout, NSString;

@interface FBTransitionFrameSetter : NSObject <FBRichStoryFrameSetter> {

	FBRichStoryLayout* _beginLayout;
	FBRichStoryLayout* _endLayout;
	double _transitionProgress;

}

@property (assign,nonatomic) double transitionProgress;                      //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (nonatomic,readonly) FBRichStoryLayout * beginLayout;              //@synthesize beginLayout=_beginLayout - In the implementation block
@property (nonatomic,readonly) FBRichStoryLayout * endLayout;                //@synthesize endLayout=_endLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) BOOL hasCompletedComputation; 
+(id)transitionFrameSetterWithBeginLayout:(id)arg1 endLayout:(id)arg2 ;
+(id)_transitionAttributesForProgress:(double)arg1 withBeginAttributes:(id)arg2 endAttributes:(id)arg3 ;
-(id)layoutAttributesForElementWithID:(id)arg1 ;
-(void)computeLayoutImmediately:(BOOL)arg1 ;
-(id)elementLayoutForElementID:(id)arg1 ;
-(FBRichStoryLayout *)beginLayout;
-(FBRichStoryLayout *)endLayout;
-(id)currentElementsWithinFrame:(CGRect)arg1 ;
-(id)initWithBeginLayout:(id)arg1 endLayout:(id)arg2 ;
-(id)existingLayoutAttributesForElementWithID:(id)arg1 ;
-(BOOL)hasCompletedComputation;
-(CGRect)bounds;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
@end
