/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
#import <Messenger/Messenger-Structs.h>
@class CKComponentLifecycleManager, NSString;

@interface CKComponentDataSourceInputItem : NSObject {

	unsigned long long _hash;
	CKSizeRange _constrainedSize;
	CKComponentLifecycleManager* _lifecycleManager;
	id<NSObject> _model;
	NSString* _UUID;

}

@property (nonatomic,readonly) CKComponentLifecycleManager * lifecycleManager;              //@synthesize lifecycleManager=_lifecycleManager - In the implementation block
@property (nonatomic,readonly) id<NSObject> model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUID;                                        //@synthesize UUID=_UUID - In the implementation block
-(CKComponentLifecycleManager *)lifecycleManager;
-(CKSizeRange)constrainedSize;
-(id)initWithLifecycleManager:(id)arg1 model:(id)arg2 constrainedSize:(CKSizeRange)arg3 UUID:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)UUID;
-(id<NSObject>)model;
@end

