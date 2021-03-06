/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBLazyCreator, UIColor, MNThreadGenericSnippet;

@interface MNThreadGenericSnippetView : UIView {

	FBLazyCreator* _photoSnippetViewMaskCreator;
	FBLazyCreator* _photoSnippetViewCreator;
	UIColor* _maskOuterColor;
	MNThreadGenericSnippet* _genericSnippet;

}

@property (nonatomic,readonly) FBLazyCreator * photoSnippetViewCreator;              //@synthesize photoSnippetViewCreator=_photoSnippetViewCreator - In the implementation block
@property (nonatomic,copy) UIColor * maskOuterColor;                                 //@synthesize maskOuterColor=_maskOuterColor - In the implementation block
@property (nonatomic,copy) MNThreadGenericSnippet * genericSnippet;                  //@synthesize genericSnippet=_genericSnippet - In the implementation block
-(MNThreadGenericSnippet *)genericSnippet;
-(void)setGenericSnippet:(MNThreadGenericSnippet *)arg1 ;
-(void)setMaskOuterColor:(UIColor *)arg1 ;
-(FBLazyCreator *)photoSnippetViewCreator;
-(BOOL)_hasSponsoredMessageSnippet;
-(UIColor *)maskOuterColor;
-(void)_updateMaskView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_update;
@end

