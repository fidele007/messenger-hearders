/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBBrowserLayoutBarViewConfig : FBValueObject <NSCopying> {

	BOOL _translucent;
	UIColor* _barTint;
	UIColor* _tint;
	UIColor* _deselectedTint;
	UIColor* _selectedTint;

}

@property (nonatomic,copy,readonly) UIColor * barTint;                     //@synthesize barTint=_barTint - In the implementation block
@property (nonatomic,readonly) BOOL translucent;                           //@synthesize translucent=_translucent - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tint;                        //@synthesize tint=_tint - In the implementation block
@property (nonatomic,copy,readonly) UIColor * deselectedTint;              //@synthesize deselectedTint=_deselectedTint - In the implementation block
@property (nonatomic,copy,readonly) UIColor * selectedTint;                //@synthesize selectedTint=_selectedTint - In the implementation block
-(id)initWithBarTint:(id)arg1 translucent:(BOOL)arg2 tint:(id)arg3 deselectedTint:(id)arg4 selectedTint:(id)arg5 ;
-(UIColor *)barTint;
-(UIColor *)selectedTint;
-(UIColor *)deselectedTint;
-(BOOL)translucent;
-(UIColor *)tint;
@end

