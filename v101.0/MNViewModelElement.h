/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNViewModelElementKey;

@interface MNViewModelElement : FBValueObject <NSCopying> {

	MNViewModelElementKey* _key;
	id _viewModel;

}

@property (nonatomic,copy,readonly) MNViewModelElementKey * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) id viewModel;                             //@synthesize viewModel=_viewModel - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithKey:(id)arg1 viewModel:(id)arg2 ;
-(MNViewModelElementKey *)key;
-(id)viewModel;
@end

