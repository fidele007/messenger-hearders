/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNBusinessStackedContainerElement : FBValueObject <NSCopying> {

	id _viewModel;
	unsigned long long _alignment;
	long long _relativeSize;
	UIColor* _backgroundColor;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy,readonly) id viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                         //@synthesize insets=_insets - In the implementation block
@property (nonatomic,readonly) unsigned long long alignment;                //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) long long relativeSize;                      //@synthesize relativeSize=_relativeSize - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)elementWithViewModel:(id)arg1 ;
+(id)elementWithViewModel:(id)arg1 insets:(UIEdgeInsets)arg2 alignment:(unsigned long long)arg3 ;
+(id)elementWithViewModel:(id)arg1 insets:(UIEdgeInsets)arg2 ;
-(id)initWithViewModel:(id)arg1 insets:(UIEdgeInsets)arg2 alignment:(unsigned long long)arg3 relativeSize:(long long)arg4 backgroundColor:(id)arg5 ;
-(long long)relativeSize;
-(UIColor *)backgroundColor;
-(unsigned long long)alignment;
-(UIEdgeInsets)insets;
-(id)viewModel;
@end

