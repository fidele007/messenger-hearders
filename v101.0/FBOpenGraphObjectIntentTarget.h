/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSURL, FBMemOpenGraphObject;

@interface FBOpenGraphObjectIntentTarget : FBIntentTarget {

	NSURL* _URL;

}

@property (nonatomic,readonly) FBMemOpenGraphObject * openGraphObject; 
@property (nonatomic,copy,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
+(id)openGraphObjectTargetForURL:(id)arg1 ;
+(id)openGraphObjectTargetWithOpenGraphObject:(id)arg1 ;
-(id)fallbackURLs;
-(FBMemOpenGraphObject *)openGraphObject;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
@end
