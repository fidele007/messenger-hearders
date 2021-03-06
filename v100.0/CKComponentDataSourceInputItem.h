/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

