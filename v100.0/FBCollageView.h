/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface FBCollageView : UIView {

	NSArray* _items;
	CGSize _innerPadding;

}

@property (nonatomic,copy) NSArray * items;                    //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) CGSize innerPadding;              //@synthesize innerPadding=_innerPadding - In the implementation block
+(double)heightForItems:(id)arg1 width:(double)arg2 ;
+(CGSize)availableSizeForItems:(id)arg1 ;
+(CGRect)frameForItem:(id)arg1 availableSize:(CGSize)arg2 size:(CGSize)arg3 innerPadding:(CGSize)arg4 ;
+(id)framesForItems:(id)arg1 width:(double)arg2 innerPadding:(CGSize)arg3 ;
-(CGSize)innerPadding;
-(void)setInnerPadding:(CGSize)arg1 ;
-(CGSize)_availableItemSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithItems:(id)arg1 ;
@end

