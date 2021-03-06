/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNUIElementLayout : FBValueObject <NSCopying> {

	long long _alignment;
	CGSize _size;
	UIEdgeInsets _margins;

}

@property (nonatomic,readonly) long long alignment;               //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets margins;              //@synthesize margins=_margins - In the implementation block
@property (nonatomic,readonly) CGSize size;                       //@synthesize size=_size - In the implementation block
-(id)initWithAlignment:(long long)arg1 margins:(UIEdgeInsets)arg2 size:(CGSize)arg3 ;
-(CGSize)size;
-(long long)alignment;
-(UIEdgeInsets)margins;
@end

