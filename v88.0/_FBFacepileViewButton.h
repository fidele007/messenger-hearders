/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class FBFacepileItem;

@interface _FBFacepileViewButton : UIButton {

	FBFacepileItem* _item;
	unsigned long long _index;

}

@property (nonatomic,copy) FBFacepileItem * item;                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(FBFacepileItem *)item;
-(unsigned long long)index;
-(void)setItem:(FBFacepileItem *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
@end

