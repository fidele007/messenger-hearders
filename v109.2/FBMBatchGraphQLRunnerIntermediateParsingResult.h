/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface FBMBatchGraphQLRunnerIntermediateParsingResult : FBValueObject <NSCopying> {

	NSDictionary* _singleFetchConfigToMemThreadMap;
	NSDictionary* _singleFetchConfigToErrorMap;

}

@property (nonatomic,copy,readonly) NSDictionary * singleFetchConfigToMemThreadMap;              //@synthesize singleFetchConfigToMemThreadMap=_singleFetchConfigToMemThreadMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * singleFetchConfigToErrorMap;                  //@synthesize singleFetchConfigToErrorMap=_singleFetchConfigToErrorMap - In the implementation block
-(id)initWithSingleFetchConfigToMemThreadMap:(id)arg1 singleFetchConfigToErrorMap:(id)arg2 ;
-(NSDictionary *)singleFetchConfigToMemThreadMap;
-(NSDictionary *)singleFetchConfigToErrorMap;
@end

