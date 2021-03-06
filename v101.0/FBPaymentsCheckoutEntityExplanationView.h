/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>
#import <Messenger/FBPaymentsExpandableItem.h>

@protocol FBPaymentsExpandableViewControllerExpandingDelegate;
@class UIView, FBRichTextView, NSString;

@interface FBPaymentsCheckoutEntityExplanationView : UIView <FBPaymentsEdgeInsetsConfigurable, FBPaymentsExpandableItem> {

	UIView* _containerView;
	FBRichTextView* _entityExplanationTextView;
	FBRichTextView* _expandedentityExplanationTextView;
	BOOL _shouldExpand;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	NSString* _entityExplanationText;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSString * entityExplanationText;                                                                //@synthesize entityExplanationText=_entityExplanationText - In the implementation block
@property (assign,nonatomic) BOOL shouldExpand;                                                                             //@synthesize shouldExpand=_shouldExpand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(void)_updateViewVisibility;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)setEntityExplanationText:(NSString *)arg1 ;
-(NSString *)entityExplanationText;
-(void)_onTappingText:(id)arg1 event:(id)arg2 ;
-(BOOL)shouldExpand;
-(void)setShouldExpand:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

