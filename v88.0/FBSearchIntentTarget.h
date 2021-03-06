/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@protocol FBAvatarProtocol;
@class NSString, FBMemModelObject;

@interface FBSearchIntentTarget : FBIntentTarget {

	NSString* _defaultQuery;
	FBMemModelObject*<FBAvatarProtocol> _singleStateEntity;

}

@property (nonatomic,copy,readonly) NSString * defaultQuery;                                            //@synthesize defaultQuery=_defaultQuery - In the implementation block
@property (nonatomic,copy,readonly) FBMemModelObject*<FBAvatarProtocol> singleStateEntity;              //@synthesize singleStateEntity=_singleStateEntity - In the implementation block
+(id)searchTargetForDefaultQuery:(id)arg1 ;
+(id)searchTargetForSingleStateEntity:(id)arg1 ;
-(NSString *)defaultQuery;
-(FBMemModelObject*<FBAvatarProtocol>)singleStateEntity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

