/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNBusinessStackedContainerElement : FBValueObject <NSCopying> {

	id _viewModel;
	UIColor* _backgroundColor;
	unsigned long long _alignment;
	double _relativeSize;
	unsigned long long _sizing;
	CGSize _size;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy,readonly) id viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                         //@synthesize insets=_insets - In the implementation block
@property (nonatomic,readonly) unsigned long long alignment;                //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) double relativeSize;                         //@synthesize relativeSize=_relativeSize - In the implementation block
@property (nonatomic,readonly) unsigned long long sizing;                   //@synthesize sizing=_sizing - In the implementation block
@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
-(id)initWithViewModel:(id)arg1 backgroundColor:(id)arg2 insets:(UIEdgeInsets)arg3 alignment:(unsigned long long)arg4 relativeSize:(double)arg5 sizing:(unsigned long long)arg6 size:(CGSize)arg7 ;
-(double)relativeSize;
-(unsigned long long)sizing;
-(CGSize)size;
-(UIColor *)backgroundColor;
-(unsigned long long)alignment;
-(UIEdgeInsets)insets;
-(id)viewModel;
@end
