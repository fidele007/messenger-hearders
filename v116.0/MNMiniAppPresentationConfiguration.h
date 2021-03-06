/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMThreadKey, NSDictionary;

@interface MNMiniAppPresentationConfiguration : FBValueObject <NSCopying> {

	BOOL _minimized;
	NSString* _url;
	long long _appId;
	NSString* _flowStateIdentifier;
	FBMThreadKey* _threadKey;
	NSString* _entrypoint;
	NSString* _suggestionId;
	NSDictionary* _entities;

}

@property (nonatomic,copy,readonly) NSString * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long appId;                                  //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NSString * flowStateIdentifier;              //@synthesize flowStateIdentifier=_flowStateIdentifier - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                    //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) BOOL minimized;                                   //@synthesize minimized=_minimized - In the implementation block
@property (nonatomic,copy,readonly) NSString * entrypoint;                       //@synthesize entrypoint=_entrypoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionId;                     //@synthesize suggestionId=_suggestionId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * entities;                     //@synthesize entities=_entities - In the implementation block
-(id)initWithUrl:(id)arg1 appId:(long long)arg2 flowStateIdentifier:(id)arg3 threadKey:(id)arg4 minimized:(BOOL)arg5 entrypoint:(id)arg6 suggestionId:(id)arg7 entities:(id)arg8 ;
-(NSString *)flowStateIdentifier;
-(BOOL)minimized;
-(NSString *)entrypoint;
-(NSString *)url;
-(long long)appId;
-(NSDictionary *)entities;
-(FBMThreadKey *)threadKey;
-(NSString *)suggestionId;
@end

