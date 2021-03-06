/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBCollectionViewFlowLayout.h>

@class NSString;

@interface MNComposerCollectionViewSeparatingLayout : FBCollectionViewFlowLayout {

	NSString* _separatorViewKind;

}

@property (nonatomic,copy) NSString * separatorViewKind;              //@synthesize separatorViewKind=_separatorViewKind - In the implementation block
-(id)_layoutAttributesForSeparatorsWithItemLayoutAttributes:(id)arg1 ;
-(NSString *)separatorViewKind;
-(void)setSeparatorViewKind:(NSString *)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
@end

